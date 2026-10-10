// from server: 51% by colin
struct Notifier
{
    int field0;
    char pad[0x2c];
    char field30;
    int field0c;
    int field20;
    int field28;

    bool compare(const Notifier& other);
};

bool Notifier::compare(const Notifier& other)
{
    bool a;
    if (this->field0 == 0 || this->field30 != 0)
        a = true;
    else
        a = false;

    bool b;
    if (other.field0 == 0 || other.field30 != 0)
        b = true;
    else
        b = false;

    if (a || b)
        return a == b;

    if (!((bool (__thiscall *)(int*, int*))0x489aa0)(&this->field0c, (int*)&other.field0c))
        return false;

    if (!((bool (__thiscall *)(int*, int*))0x46c570)(&this->field20, (int*)&other.field20))
        return false;

    if (!((bool (__thiscall *)(int*, int*))0x46c570)(&this->field28, (int*)&other.field28))
        return false;

    return true;
}
