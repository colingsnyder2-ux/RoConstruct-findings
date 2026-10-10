// from server: 81% by colin
struct TypedStatsItem {
    bool check();
};

bool TypedStatsItem::check()
{
    if ((*(bool (__thiscall **)(void *, int))(*(int *)this + 0x10))(this, 0x131))
        goto ret_true;
    if ((*(bool (__thiscall **)(void *, int))(*(int *)this + 0x10))(this, 0x132))
        goto ret_true;
    return false;
ret_true:
    return true;
}
