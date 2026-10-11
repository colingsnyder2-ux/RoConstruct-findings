// from server: 67% by colin
// roc 2008-06 00572bc0  unit: RBX::ServiceProvider  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00572bc0
//
// 00572bc0  83ec10               sub esp, 0x10
// 00572bc3  53                   push ebx
// 00572bc4  55                   push ebp
// 00572bc5  56                   push esi
// 00572bc6  8be9                 mov ebp, ecx
// 00572bc8  8b75b8               mov esi, dword ptr [ebp - 0x48]
// 00572bcb  57                   push edi
// 00572bcc  85f6                 test esi, esi
// 00572bce  0f84c1000000         je 0x572c95
// 00572bd4  8b4610               mov eax, dword ptr [esi + 0x10]
// 00572bd7  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00572bdd  89442410             mov dword ptr [esp + 0x10], eax
// 00572be1  39460c               cmp dword ptr [esi + 0xc], eax
// 00572be4  7602                 jbe 0x572be8
// 00572be6  ffd3                 call ebx
// 00572be8  8b06                 mov eax, dword ptr [esi]
// 00572bea  8b75b8               mov esi, dword ptr [ebp - 0x48]
// 00572bed  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00572bf0  89442418             mov dword ptr [esp + 0x18], eax
// 00572bf4  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 00572bf7  7602                 jbe 0x572bfb
// 00572bf9  ffd3                 call ebx
// 00572bfb  8b36                 mov esi, dword ptr [esi]
// 00572bfd  8d4900               lea ecx, [ecx]
// 00572c00  85f6                 test esi, esi
// 00572c02  7406                 je 0x572c0a
// 00572c04  3b742418             cmp esi, dword ptr [esp + 0x18]
// 00572c08  7402                 je 0x572c0c
// 00572c0a  ffd3                 call ebx
// 00572c0c  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 00572c10  0f847f000000         je 0x572c95
// 00572c16  85f6                 test esi, esi
// 00572c18  756f                 jne 0x572c89
// 00572c1a  ffd3                 call ebx
// 00572c1c  33c0                 xor eax, eax
// 00572c1e  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00572c21  7202                 jb 0x572c25
// 00572c23  ffd3                 call ebx
// 00572c25  8b07                 mov eax, dword ptr [edi]
// 00572c27  6a00                 push 0
// 00572c29  6844989200           push 0x929844
// 00572c2e  687c909200           push 0x92907c
// 00572c33  6a00                 push 0
// 00572c35  50                   push eax
// 00572c36  e88beb1200           call 0x6a17c6
// 00572c3b  83c414               add esp, 0x14
// 00572c3e  85c0                 test eax, eax
// 00572c40  7430                 je 0x572c72
// 00572c42  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00572c46  51                   push ecx
// 00572c47  85f6                 test esi, esi
// 00572c49  7542                 jne 0x572c8d
// 00572c4b  ffd3                 call ebx
// 00572c4d  33c0                 xor eax, eax
// 00572c4f  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00572c52  7202                 jb 0x572c56
// 00572c54  ffd3                 call ebx
// 00572c56  8b17                 mov edx, dword ptr [edi]
// 00572c58  83ec08               sub esp, 8
// 00572c5b  8bc4                 mov eax, esp
// 00572c5d  89642420             mov dword ptr [esp + 0x20], esp
// 00572c61  52                   push edx
// 00572c62  50                   push eax
// 00572c63  e8d85d0a00           call 0x618a40
// 00572c68  83c408               add esp, 8
// 00572c6b  8bcd                 mov ecx, ebp
// 00572c6d  e8be83f1ff           call 0x48b030
// 00572c72  85f6                 test esi, esi
// 00572c74  751b                 jne 0x572c91
// 00572c76  ffd3                 call ebx
// 00572c78  33c0                 xor eax, eax
// 00572c7a  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00572c7d  7202                 jb 0x572c81
// 00572c7f  ffd3                 call ebx
// 00572c81  83c708               add edi, 8
// 00572c84  e977ffffff           jmp 0x572c00
// 00572c89  8b06                 mov eax, dword ptr [esi]
// 00572c8b  eb91                 jmp 0x572c1e
// 00572c8d  8b06                 mov eax, dword ptr [esi]
// 00572c8f  ebbe                 jmp 0x572c4f
// 00572c91  8b06                 mov eax, dword ptr [esi]
// 00572c93  ebe5                 jmp 0x572c7a
// 00572c95  5f                   pop edi
// 00572c96  5e                   pop esi
// 00572c97  5d                   pop ebp
// 00572c98  5b                   pop ebx
// 00572c99  83c410               add esp, 0x10
// 00572c9c  c20400               ret 4

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" int __cdecl sub_6A17C6(int, int, int, int, int);
extern "C" void __cdecl sub_618A40(int, int);

struct RBX_ServiceProvider {
    void sub_48B030(int);
    void sub_572BC0(int);
};

void RBX_ServiceProvider::sub_572BC0(int arg) {
    int* esi;
    int* edi;
    int eax;
    int ebx;
    int local10;
    int local18;
    int local24;
    int local20;

    esi = *(int**)((char*)this - 0x48);
    if (esi == 0) {
        return;
    }
    eax = esi[4];
    ebx = *(int*)0x802890;
    local10 = eax;
    if ((unsigned)esi[3] > (unsigned)eax) {
        ((void (__cdecl*)())ebx)();
    }
    eax = esi[0];
    esi = *(int**)((char*)this - 0x48);
    edi = (int*)esi[3];
    local18 = eax;
    if ((unsigned)edi > (unsigned)esi[4]) {
        ((void (__cdecl*)())ebx)();
    }
    esi = (int*)esi[0];
    while (1) {
        if (esi != 0) {
            if (esi == (int*)local18) {
                goto check_end;
            }
        }
        ((void (__cdecl*)())ebx)();
    check_end:
        if (edi == (int*)local10) {
            return;
        }
        if (esi != 0) {
            eax = esi[0];
        } else {
            ((void (__cdecl*)())ebx)();
            eax = 0;
            if ((unsigned)edi < (unsigned)*(int*)(eax + 0x10)) {
                goto skip1;
            }
            ((void (__cdecl*)())ebx)();
        skip1:
            eax = edi[0];
        }
        if (sub_6A17C6(eax, 0, 0x92907C, 0x929844, 0) != 0) {
            local24 = arg;
            if (esi != 0) {
                eax = esi[0];
            } else {
                ((void (__cdecl*)())ebx)();
                eax = 0;
                if ((unsigned)edi < (unsigned)*(int*)(eax + 0x10)) {
                    goto skip2;
                }
                ((void (__cdecl*)())ebx)();
            skip2:
                eax = edi[0];
            }
            local20 = (int)&local20;
            sub_618A40((int)&local20, eax);
            this->sub_48B030(local24);
        }
        if (esi != 0) {
            eax = esi[0];
        } else {
            ((void (__cdecl*)())ebx)();
            eax = 0;
            if ((unsigned)edi < (unsigned)*(int*)(eax + 0x10)) {
                goto skip3;
            }
            ((void (__cdecl*)())ebx)();
        skip3:
            eax = edi[0];
        }
        edi = (int*)((char*)edi + 8);
    }
}
