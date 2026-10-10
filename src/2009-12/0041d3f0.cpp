// from server: 90% by atomic.potato
struct CRobloxTreeCtrl
{
    unsigned char padding[0xe8];
    unsigned char field_e8;
    void SetValue(int* value);
};

void CRobloxTreeCtrl::SetValue(int* value)
{
    *value = field_e8 != 0;
}
