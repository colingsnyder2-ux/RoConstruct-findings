// from server: 45% by atomic.potato
// roc 2011-06 0071def0  unit: RBX::VAdvLuaDragger::?$FactoryProduct  size: 388 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071def0
//
// 0071def0  64a100000000         mov eax, dword ptr fs:[0]
// 0071def6  6aff                 push -1
// 0071def8  68b96f9f00           push 0x9f6fb9
// 0071defd  50                   push eax
// 0071defe  64892500000000       mov dword ptr fs:[0], esp
// 0071df05  83ec4c               sub esp, 0x4c
// 0071df08  56                   push esi
// 0071df09  8bf1                 mov esi, ecx
// 0071df0b  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0071df11  83f802               cmp eax, 2
// 0071df14  0f8507010000         jne 0x71e021
// 0071df1a  53                   push ebx
// 0071df1b  57                   push edi
// 0071df1c  8d44240c             lea eax, [esp + 0xc]
// 0071df20  50                   push eax
// 0071df21  8d8ec8000000         lea ecx, [esi + 0xc8]
// 0071df27  e804180200           call 0x73f730
// 0071df2c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0071df30  33db                 xor ebx, ebx
// 0071df32  895c2460             mov dword ptr [esp + 0x60], ebx
// 0071df36  3bc3                 cmp eax, ebx
// 0071df38  743c                 je 0x71df76
// 0071df3a  50                   push eax
// 0071df3b  e8402bf2ff           call 0x640a80
// 0071df40  83c404               add esp, 4
// 0071df43  85c0                 test eax, eax
// 0071df45  742f                 je 0x71df76
// 0071df47  8d4c2414             lea ecx, [esp + 0x14]
// 0071df4b  e80019f2ff           call 0x63f850
// 0071df50  8d4c2414             lea ecx, [esp + 0x14]
// 0071df54  51                   push ecx
// 0071df55  8d96b8000000         lea edx, [esi + 0xb8]
// 0071df5b  52                   push edx
// 0071df5c  c644246801           mov byte ptr [esp + 0x68], 1
// 0071df61  e8da2c0400           call 0x760c40
// 0071df66  83c408               add esp, 8
// 0071df69  8d4c2414             lea ecx, [esp + 0x14]
// 0071df6d  885c2460             mov byte ptr [esp + 0x60], bl
// 0071df71  e85afcfeff           call 0x70dbd0
// 0071df76  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0071df7a  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 0071df82  3bfb                 cmp edi, ebx
// 0071df84  742a                 je 0x71dfb0
// 0071df86  8d4704               lea eax, [edi + 4]
// 0071df89  83c9ff               or ecx, 0xffffffff
// 0071df8c  f00fc108             lock xadd dword ptr [eax], ecx
// 0071df90  751e                 jne 0x71dfb0
// 0071df92  8b17                 mov edx, dword ptr [edi]
// 0071df94  8b4204               mov eax, dword ptr [edx + 4]
// 0071df97  8bcf                 mov ecx, edi
// 0071df99  ffd0                 call eax
// 0071df9b  8d4f08               lea ecx, [edi + 8]
// 0071df9e  83caff               or edx, 0xffffffff
// 0071dfa1  f00fc111             lock xadd dword ptr [ecx], edx
// 0071dfa5  7509                 jne 0x71dfb0
// 0071dfa7  8b07                 mov eax, dword ptr [edi]
// 0071dfa9  8b5008               mov edx, dword ptr [eax + 8]
// 0071dfac  8bcf                 mov ecx, edi
// 0071dfae  ffd2                 call edx
// 0071dfb0  8dbeb8000000         lea edi, [esi + 0xb8]
// 0071dfb6  57                   push edi
// 0071dfb7  e8342f0400           call 0x760ef0
// 0071dfbc  57                   push edi
// 0071dfbd  e8be280400           call 0x760880
// 0071dfc2  8bbeac000000         mov edi, dword ptr [esi + 0xac]
// 0071dfc8  83c408               add esp, 8
// 0071dfcb  3bfb                 cmp edi, ebx
// 0071dfcd  7410                 je 0x71dfdf
// 0071dfcf  8bcf                 mov ecx, edi
// 0071dfd1  e84aff0900           call 0x7bdf20
// 0071dfd6  57                   push edi
// 0071dfd7  e87cc00e00           call 0x80a058
// 0071dfdc  83c404               add esp, 4
// 0071dfdf  899eac000000         mov dword ptr [esi + 0xac], ebx
// 0071dfe5  8bbeb0000000         mov edi, dword ptr [esi + 0xb0]
// 0071dfeb  3bfb                 cmp edi, ebx
// 0071dfed  7410                 je 0x71dfff
// 0071dfef  8bcf                 mov ecx, edi
// 0071dff1  e8ea3f0a00           call 0x7c1fe0
// 0071dff6  57                   push edi
// 0071dff7  e85cc00e00           call 0x80a058
// 0071dffc  83c404               add esp, 4
// 0071dfff  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 0071e005  5f                   pop edi
// 0071e006  5b                   pop ebx
// 0071e007  c7869000000003000000 mov dword ptr [esi + 0x90], 3
// 0071e011  5e                   pop esi
// 0071e012  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0071e016  64890d00000000       mov dword ptr fs:[0], ecx
// 0071e01d  83c458               add esp, 0x58
// 0071e020  c3                   ret 
// 0071e021  83f801               cmp eax, 1
// 0071e024  751a                 jne 0x71e040
// 0071e026  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0071e02a  c7869000000004000000 mov dword ptr [esi + 0x90], 4
// 0071e034  5e                   pop esi
// 0071e035  64890d00000000       mov dword ptr fs:[0], ecx
// 0071e03c  83c458               add esp, 0x58
// 0071e03f  c3                   ret 
// 0071e040  681818ab00           push 0xab1818
// 0071e045  8d4c2410             lea ecx, [esp + 0x10]
// 0071e049  ff15c404a400         call dword ptr [0xa404c4]
// 0071e04f  8d44240c             lea eax, [esp + 0xc]
// 0071e053  50                   push eax
// 0071e054  8d4c242c             lea ecx, [esp + 0x2c]
// 0071e058  c744245c02000000     mov dword ptr [esp + 0x5c], 2
// 0071e060  e8ebc8ceff           call 0x40a950
// 0071e065  682091b800           push 0xb89120
// 0071e06a  8d4c242c             lea ecx, [esp + 0x2c]
// 0071e06e  51                   push ecx
// 0071e06f  e838d00e00           call 0x80b0ac

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl sub_640A80(void*);
extern "C" void __cdecl sub_80A058(void*);
extern "C" void __cdecl sub_80B0AC(void*, void*);
extern "C" void __cdecl sub_760C40(void*, void*);
extern "C" void __cdecl sub_760EF0(void*);
extern "C" void __cdecl sub_760880(void*);
extern "C" void __cdecl sub_73F730(void*, void*);
extern "C" void __cdecl sub_63F850(void*);
extern "C" void __cdecl sub_70DBD0(void*);
extern "C" void __cdecl sub_7BDF20(void*);
extern "C" void __cdecl sub_7C1FE0(void*);
extern "C" void __cdecl sub_40A950(void*);
extern "C" void __cdecl sub_A404C4(void*, const char*);

struct VAdvLuaDragger {
    char pad0[0x90];
    int state;
    char pad1[0x14];
    void* ptr_ac;
    void* ptr_b0;
    char pad2[4];
    void* ptr_b8;
    char pad3[0xc];
    void* ptr_c8;
    int mouseUp();
};

int VAdvLuaDragger::mouseUp() {
    if (state == 2) {
        void* local = 0;
        sub_73F730(&ptr_c8, &local);
        void* p = local;
        if (p != 0) {
            if (sub_640A80(p) != 0) {
                char buf[0x14];
                sub_63F850(buf);
                sub_760C40(&ptr_b8, buf);
                sub_70DBD0(buf);
            }
        }
        if (p != 0) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
                void** vt = *(void***)p;
                ((void (__thiscall*)(void*))vt[1])(p);
                if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                    void** vt2 = *(void***)p;
                    ((void (__thiscall*)(void*))vt2[2])(p);
                }
            }
        }
        sub_760EF0(&ptr_b8);
        sub_760880(&ptr_b8);
        if (ptr_ac != 0) {
            sub_7BDF20(ptr_ac);
            sub_80A058(ptr_ac);
        }
        ptr_ac = 0;
        if (ptr_b0 != 0) {
            sub_7C1FE0(ptr_b0);
            sub_80A058(ptr_b0);
        }
        ptr_b0 = 0;
        state = 3;
        return 0;
    }
    if (state == 1) {
        state = 4;
        return 0;
    }
    char str[0x1c];
    sub_A404C4(str, "Call to AdvLuaDragger::mouseUp without mouseDown");
    sub_40A950(str);
    sub_80B0AC(str, str);
    return 0;
}
