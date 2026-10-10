// from server: 80% by why2
struct GWindow {
    char pad[0x94];
    int field_94;
    void get_94(int* out);
};

void GWindow::get_94(int* out) {
    *out = field_94;
}
