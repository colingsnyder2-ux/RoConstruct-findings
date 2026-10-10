// from server: 80% by colin
struct ExitCommand {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    bool execute(int arg);
};

extern "C" void __stdcall sub_77e6d8();
extern "C" void __stdcall sub_77e690(void*);

bool ExitCommand::execute(int arg)
{
    int idx = this->field4;
    if (idx >= 0)
    {
        int begin = this->fieldC;
        if (begin == 0)
        {
            sub_77e6d8();
        }
        else
        {
            int count = (this->field10 - begin) / 36;
            if ((unsigned int)idx >= (unsigned int)count)
                sub_77e6d8();
        }

        int* ptr = (int*)(this->fieldC + idx * 36);
        sub_77e690(ptr);
        return true;
    }
    return false;
}
