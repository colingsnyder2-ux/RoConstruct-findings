// from server: 63% by colin
struct ResetCommand {
    char pad[0x0c];
    void* object;
    char pad2[0x04];
    int enabled();
};

void func_0057d250(void*);
int func_00581c00(void*, int);
int func_00554da0(void*);

int ResetCommand::enabled()
{
    func_0057d250(object);
    int* p = (int*)func_00581c00((char*)this + 0x10, 1);
    *p = 0;
    return func_00554da0(p);
}
