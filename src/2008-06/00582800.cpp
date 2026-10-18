// from server: 64% by colin
struct ResetCommand {
    char pad[0x0c];
    void* object;
    char pad2[0x04];
    int enabled();
};

void __fastcall func_0057d250(void*);
int* __fastcall func_00581c00(void*, int);
int __fastcall func_00554da0(int*);

int ResetCommand::enabled()
{
    void* o = object;
    func_0057d250(o);
    int* p = func_00581c00((char*)this + 0x10, 1);
    *p = 0;
    return func_00554da0(p);
}
