// from server: 100% by colin
// roc 2008-06 0046ad70  unit: VCWorkspace::?$CComObject  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046ad70
//
// 0046ad70  6aff                 push -1
// 0046ad72  68ed387c00           push 0x7c38ed
// 0046ad77  64a100000000         mov eax, dword ptr fs:[0]
// 0046ad7d  50                   push eax
// 0046ad7e  64892500000000       mov dword ptr fs:[0], esp
// 0046ad85  81ec04040000         sub esp, 0x404
// 0046ad8b  56                   push esi
// 0046ad8c  6a0c                 push 0xc
// 0046ad8e  e88d5b2300           call 0x6a0920
// 0046ad93  8bf0                 mov esi, eax
// 0046ad95  83c404               add esp, 4
// 0046ad98  89742404             mov dword ptr [esp + 4], esi
// 0046ad9c  c784241004000000000000 mov dword ptr [esp + 0x410], 0
// 0046ada7  85f6                 test esi, esi
// 0046ada9  7416                 je 0x46adc1
// 0046adab  8bce                 mov ecx, esi
// 0046adad  e8b0612300           call 0x6a0f62
// 0046adb2  c70684038100         mov dword ptr [esi], 0x810384
// 0046adb8  c7460800000000       mov dword ptr [esi + 8], 0
// 0046adbf  eb02                 jmp 0x46adc3
// 0046adc1  33f6                 xor esi, esi
// 0046adc3  8b06                 mov eax, dword ptr [esi]
// 0046adc5  8b5018               mov edx, dword ptr [eax + 0x18]
// 0046adc8  6a00                 push 0
// 0046adca  6800040000           push 0x400
// 0046adcf  8d4c2410             lea ecx, [esp + 0x10]
// 0046add3  51                   push ecx
// 0046add4  8bce                 mov ecx, esi
// 0046add6  c784241c040000ffffffff mov dword ptr [esp + 0x41c], 0xffffffff
// 0046ade1  c7460801400080       mov dword ptr [esi + 8], 0x80004001
// 0046ade8  ffd2                 call edx
// 0046adea  8b842418040000       mov eax, dword ptr [esp + 0x418]
// 0046adf1  8b94241c040000       mov edx, dword ptr [esp + 0x41c]
// 0046adf8  50                   push eax
// 0046adf9  68ec018500           push 0x8501ec
// 0046adfe  6a00                 push 0
// 0046ae00  6a00                 push 0
// 0046ae02  8d4c2418             lea ecx, [esp + 0x18]
// 0046ae06  51                   push ecx
// 0046ae07  52                   push edx
// 0046ae08  e8a3e2fbff           call 0x4290b0
// 0046ae0d  6844b58d00           push 0x8db544
// 0046ae12  8d442408             lea eax, [esp + 8]
// 0046ae16  50                   push eax
// 0046ae17  8974240c             mov dword ptr [esp + 0xc], esi
// 0046ae1b  e86c672300           call 0x6a158c
// 0046ae20  5e                   pop esi

extern void * __cdecl operator new(unsigned int);
extern void __cdecl operator delete(void *);

extern char logName[];

extern void __stdcall writeLog(int, const char *, int, int, const char *, int);

struct Base
{
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void read(char*, unsigned int, int);
    unsigned int reserved;
    Base();
};

struct Object : Base
{
    unsigned int status;
    Object() { status = 0; }
    virtual void v0();
};

void func_0046ad70(int first, int second)
{
    char buffer[1024];
    Object *object = new Object;
    object->status = 0x80004001U;
    object->read(buffer, 1024, 0);
    writeLog(second, buffer, 0, 0, logName, first);
    throw object;
}
