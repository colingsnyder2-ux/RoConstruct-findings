// from server: 16% by atomic.potato
struct CPatchedControlComboBox {
    void *GetControl();
    int value;
};

void *CPatchedControlComboBox::GetControl()
{
    return value ? (void *)value : 0;
}
