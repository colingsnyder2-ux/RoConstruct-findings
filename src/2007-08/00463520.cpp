// from server: 84% by colin
struct CSettingsDialog {
    virtual bool hasKey(int key);
};

bool CSettingsDialog::hasKey(int key) {
    if (hasKey(0x77)) return true;
    if (hasKey(0x73)) return true;
    if (hasKey(0x61)) return true;
    if (hasKey(0x64)) return true;
    if (hasKey(0x111)) return true;
    if (hasKey(0x112)) return true;
    if (hasKey(0x114)) return true;
    if (hasKey(0x113)) return true;
    return false;
}
