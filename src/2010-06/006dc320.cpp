// from server: 57% by atomic.potato
// roc 2010-06 006dc320  unit: RBX::SkateboardPlatform  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006dc320
//
// 006dc320  56                   push esi
// 006dc321  57                   push edi
// 006dc322  68ac07c000           push 0xc007ac
// 006dc327  8bf1                 mov esi, ecx
// 006dc329  ff1580a39e00         call dword ptr [0x9ea380]
// 006dc32f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006dc333  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006dc337  c7069c39a000         mov dword ptr [esi], 0xa0399c
// 006dc33d  c6460501             mov byte ptr [esi + 5], 1
// 006dc341  33ff                 xor edi, edi
// 006dc343  897e08               mov dword ptr [esi + 8], edi
// 006dc346  a16040a500           mov eax, dword ptr [0xa54060]
// 006dc34b  89460c               mov dword ptr [esi + 0xc], eax
// 006dc34e  83ec18               sub esp, 0x18
// 006dc351  8bc4                 mov eax, esp
// 006dc353  8910                 mov dword ptr [eax], edx
// 006dc355  8b542428             mov edx, dword ptr [esp + 0x28]
// 006dc359  895004               mov dword ptr [eax + 4], edx
// 006dc35c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006dc360  895008               mov dword ptr [eax + 8], edx
// 006dc363  8b542430             mov edx, dword ptr [esp + 0x30]
// 006dc367  89500c               mov dword ptr [eax + 0xc], edx
// 006dc36a  8b542434             mov edx, dword ptr [esp + 0x34]
// 006dc36e  894e10               mov dword ptr [esi + 0x10], ecx
// 006dc371  895010               mov dword ptr [eax + 0x10], edx
// 006dc374  8b542438             mov edx, dword ptr [esp + 0x38]
// 006dc378  8d4e18               lea ecx, [esi + 0x18]
// 006dc37b  c7061c3aa000         mov dword ptr [esi], 0xa03a1c
// 006dc381  8939                 mov dword ptr [ecx], edi
// 006dc383  895014               mov dword ptr [eax + 0x14], edx
// 006dc386  e835fdffff           call 0x6dc0c0
// 006dc38b  897e38               mov dword ptr [esi + 0x38], edi
// 006dc38e  897e3c               mov dword ptr [esi + 0x3c], edi
// 006dc391  897e40               mov dword ptr [esi + 0x40], edi
// 006dc394  897e44               mov dword ptr [esi + 0x44], edi
// 006dc397  5f                   pop edi
// 006dc398  8bc6                 mov eax, esi
// 006dc39a  5e                   pop esi
// 006dc39b  c21c00               ret 0x1c

extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(long volatile*);

struct Inner
{
    void init(void*);
};

struct S
{
    char pad0[4];
    char f4;
    char pad5[3];
    int f8;
    int fc;
    int f10;
    char pad14[4];
    int f18;
    char pad1c[0x1c];
    int f38;
    int f3c;
    int f40;
    int f44;

    S* construct(void* a, int b, int c, int d, int e, int f, int g);
};

S* S::construct(void* a, int b, int c, int d, int e, int f, int g)
{
    InterlockedIncrement((long volatile*)0xc007ac);
    *(int*)this = 0xa0399c;
    *(char*)((char*)this + 5) = 1;
    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this + 0xc) = *(int*)0xa54060;
    *(int*)((char*)this + 0x10) = b;
    *(int*)this = 0xa03a1c;
    *(int*)((char*)this + 0x18) = 0;
    ((Inner*)((char*)this + 0x18))->init(&a);
    *(int*)((char*)this + 0x38) = 0;
    *(int*)((char*)this + 0x3c) = 0;
    *(int*)((char*)this + 0x40) = 0;
    *(int*)((char*)this + 0x44) = 0;
    return this;
}
