// from server: 95% by colin
struct PrimaryControllerCommand {
    int field0;
    int field4;
    void method_5621B0(int);
    void method_4108B0(int);
    void func(int);
};

void PrimaryControllerCommand::func(int arg)
{
    method_5621B0(1);
    PrimaryControllerCommand* self = (PrimaryControllerCommand*)arg;
    self->method_4108B0(-1);
    int* vtable = *(int**)self;
    void (__thiscall *fn)(void*, int) = (void (__thiscall *)(void*, int))vtable[1];
    self->field4 = -1;
    fn(self, 1);
}
