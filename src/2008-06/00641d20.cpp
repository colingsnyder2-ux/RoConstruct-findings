// from server: 100% by colin
// roc 2008-06 00641d20  unit: RBX::Humanoid  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00641d20
//
// 00641d20  83ec0c               sub esp, 0xc
// 00641d23  53                   push ebx
// 00641d24  56                   push esi
// 00641d25  8bf1                 mov esi, ecx
// 00641d27  8b4614               mov eax, dword ptr [esi + 0x14]
// 00641d2a  2b4610               sub eax, dword ptr [esi + 0x10]
// 00641d2d  33db                 xor ebx, ebx
// 00641d2f  c1f803               sar eax, 3
// 00641d32  85c0                 test eax, eax
// 00641d34  0f86b7000000         jbe 0x641df1
// 00641d3a  55                   push ebp
// 00641d3b  57                   push edi
// 00641d3c  8d642400             lea esp, [esp]
// 00641d40  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00641d43  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 00641d46  c1f903               sar ecx, 3
// 00641d49  3bd9                 cmp ebx, ecx
// 00641d4b  7206                 jb 0x641d53
// 00641d4d  ff1590288000         call dword ptr [0x802890]
// 00641d53  8b5610               mov edx, dword ptr [esi + 0x10]
// 00641d56  8d3cdd00000000       lea edi, [ebx*8]
// 00641d5d  8d443a04             lea eax, [edx + edi + 4]
// 00641d61  8b00                 mov eax, dword ptr [eax]
// 00641d63  85c0                 test eax, eax
// 00641d65  7476                 je 0x641ddd
// 00641d67  83780400             cmp dword ptr [eax + 4], 0
// 00641d6b  7470                 je 0x641ddd
// 00641d6d  8b4614               mov eax, dword ptr [esi + 0x14]
// 00641d70  2b4610               sub eax, dword ptr [esi + 0x10]
// 00641d73  c1f803               sar eax, 3
// 00641d76  3bd8                 cmp ebx, eax
// 00641d78  7206                 jb 0x641d80
// 00641d7a  ff1590288000         call dword ptr [0x802890]
// 00641d80  8d4c2414             lea ecx, [esp + 0x14]
// 00641d84  51                   push ecx
// 00641d85  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00641d88  03cf                 add ecx, edi
// 00641d8a  e8718df8ff           call 0x5cab00
// 00641d8f  8b28                 mov ebp, dword ptr [eax]
// 00641d91  8b442418             mov eax, dword ptr [esp + 0x18]
// 00641d95  85c0                 test eax, eax
// 00641d97  742c                 je 0x641dc5
// 00641d99  8bf8                 mov edi, eax
// 00641d9b  83c004               add eax, 4
// 00641d9e  83caff               or edx, 0xffffffff
// 00641da1  f00fc110             lock xadd dword ptr [eax], edx
// 00641da5  751e                 jne 0x641dc5
// 00641da7  8b07                 mov eax, dword ptr [edi]
// 00641da9  8b5004               mov edx, dword ptr [eax + 4]
// 00641dac  8bcf                 mov ecx, edi
// 00641dae  ffd2                 call edx
// 00641db0  8d4708               lea eax, [edi + 8]
// 00641db3  83c9ff               or ecx, 0xffffffff
// 00641db6  f00fc108             lock xadd dword ptr [eax], ecx
// 00641dba  7509                 jne 0x641dc5
// 00641dbc  8b17                 mov edx, dword ptr [edi]
// 00641dbe  8b4208               mov eax, dword ptr [edx + 8]
// 00641dc1  8bcf                 mov ecx, edi
// 00641dc3  ffd0                 call eax
// 00641dc5  8d4c2410             lea ecx, [esp + 0x10]
// 00641dc9  81c528020000         add ebp, 0x228
// 00641dcf  51                   push ecx
// 00641dd0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00641dd4  896c2414             mov dword ptr [esp + 0x14], ebp
// 00641dd8  e8c3f5ddff           call 0x4213a0
// 00641ddd  8b5614               mov edx, dword ptr [esi + 0x14]
// 00641de0  2b5610               sub edx, dword ptr [esi + 0x10]
// 00641de3  43                   inc ebx
// 00641de4  c1fa03               sar edx, 3
// 00641de7  3bda                 cmp ebx, edx
// 00641de9  0f8251ffffff         jb 0x641d40
// 00641def  5f                   pop edi
// 00641df0  5d                   pop ebp
// 00641df1  5e                   pop esi
// 00641df2  5b                   pop ebx
// 00641df3  83c40c               add esp, 0xc
// 00641df6  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    long strong;
    long weak;
};

struct Shared
{
    char* object;
    Control* control;
};

struct Count
{
    Control* control;
    long useCount() const { return control ? control->strong : 0; }
};

struct Entry
{
    char* object;
    Count count;
    Shared* lock(Shared* result);
};

struct Listener
{
    void invoke(char** value);
};

struct S
{
    char padding[16];
    Entry* begin;
    Entry* volatile end;

    void f(Listener* listener);
};

void S::f(Listener* listener)
{
    unsigned int i = 0;
    if (i < (unsigned int)(end - begin))
    {
        do
        {
            if (i >= (unsigned int)(end - begin))
                invalid_parameter_noinfo();

            if (begin[i].count.useCount() != 0)
            {
                if (i >= (unsigned int)(end - begin))
                    invalid_parameter_noinfo();

                Shared temporary;
                char* object = begin[i].lock(&temporary)->object;

                if (temporary.control)
                {
                    Control* owner = temporary.control;
                    if (_InterlockedDecrement(&owner->strong) == 0)
                    {
                        owner->dispose();
                        if (_InterlockedDecrement(&owner->weak) == 0)
                            owner->destroy();
                    }
                }

                char* value = object + 0x228;
                listener->invoke(&value);
            }
            ++i;
        }
        while (i < (unsigned int)(end - begin));
    }
}
