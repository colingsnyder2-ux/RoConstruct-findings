// from server: 45% by atomic.potato
// roc 2007-08 006db580  unit: CXTPDockingPaneAutoHideWnd  size: 595 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006db580
//
// 006db580  6aff                 push -1
// 006db582  68a9747600           push 0x7674a9
// 006db587  64a100000000         mov eax, dword ptr fs:[0]
// 006db58d  50                   push eax
// 006db58e  83ec24               sub esp, 0x24
// 006db591  53                   push ebx
// 006db592  55                   push ebp
// 006db593  56                   push esi
// 006db594  57                   push edi
// 006db595  a188518b00           mov eax, dword ptr [0x8b5188]
// 006db59a  33c4                 xor eax, esp
// 006db59c  50                   push eax
// 006db59d  8d442438             lea eax, [esp + 0x38]
// 006db5a1  64a300000000         mov dword ptr fs:[0], eax
// 006db5a7  8bf9                 mov edi, ecx
// 006db5a9  897c2420             mov dword ptr [esp + 0x20], edi
// 006db5ad  8b87ac000000         mov eax, dword ptr [edi + 0xac]
// 006db5b3  85c0                 test eax, eax
// 006db5b5  7405                 je 0x6db5bc
// 006db5b7  83f801               cmp eax, 1
// 006db5ba  7528                 jne 0x6db5e4
// 006db5bc  8b4760               mov eax, dword ptr [edi + 0x60]
// 006db5bf  83786800             cmp dword ptr [eax + 0x68], 0
// 006db5c3  741f                 je 0x6db5e4
// 006db5c5  8bc8                 mov ecx, eax
// 006db5c7  8b4168               mov eax, dword ptr [ecx + 0x68]
// 006db5ca  8b5054               mov edx, dword ptr [eax + 0x54]
// 006db5cd  8d4854               lea ecx, [eax + 0x54]
// 006db5d0  8b4214               mov eax, dword ptr [edx + 0x14]
// 006db5d3  ffd0                 call eax
// 006db5d5  85c0                 test eax, eax
// 006db5d7  750b                 jne 0x6db5e4
// 006db5d9  8bcf                 mov ecx, edi
// 006db5db  e800e4ffff           call 0x6d99e0
// 006db5e0  01442450             add dword ptr [esp + 0x50], eax
// 006db5e4  8b8fb0000000         mov ecx, dword ptr [edi + 0xb0]
// 006db5ea  e8c1feffff           call 0x6db4b0
// 006db5ef  8d7754               lea esi, [edi + 0x54]
// 006db5f2  8bce                 mov ecx, esi
// 006db5f4  e8574f0000           call 0x6e0550
// 006db5f9  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 006db5ff  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 006db605  8b11                 mov edx, dword ptr [ecx]
// 006db607  8b5210               mov edx, dword ptr [edx + 0x10]
// 006db60a  8d442428             lea eax, [esp + 0x28]
// 006db60e  50                   push eax
// 006db60f  ffd2                 call edx
// 006db611  8bce                 mov ecx, esi
// 006db613  e8482ff8ff           call 0x65e560
// 006db618  85c0                 test eax, eax
// 006db61a  89442418             mov dword ptr [esp + 0x18], eax
// 006db61e  0f8499010000         je 0x6db7bd
// 006db624  8d442418             lea eax, [esp + 0x18]
// 006db628  50                   push eax
// 006db629  8d4f54               lea ecx, [edi + 0x54]
// 006db62c  e82f440400           call 0x71fa60
// 006db631  85c0                 test eax, eax
// 006db633  7405                 je 0x6db63a
// 006db635  8d68ac               lea ebp, [eax - 0x54]
// 006db638  eb02                 jmp 0x6db63c
// 006db63a  33ed                 xor ebp, ebp
// 006db63c  8b5554               mov edx, dword ptr [ebp + 0x54]
// 006db63f  8b4214               mov eax, dword ptr [edx + 0x14]
// 006db642  8d5d54               lea ebx, [ebp + 0x54]
// 006db645  8bcb                 mov ecx, ebx
// 006db647  ffd0                 call eax
// 006db649  85c0                 test eax, eax
// 006db64b  0f8561010000         jne 0x6db7b2
// 006db651  8b8fb0000000         mov ecx, dword ptr [edi + 0xb0]
// 006db657  e8a4feffff           call 0x6db500
// 006db65c  8bcb                 mov ecx, ebx
// 006db65e  8bf0                 mov esi, eax
// 006db660  e8fb2ef8ff           call 0x65e560
// 006db665  85c0                 test eax, eax
// 006db667  89442414             mov dword ptr [esp + 0x14], eax
// 006db66b  0f84a6000000         je 0x6db717
// 006db671  8d4c2414             lea ecx, [esp + 0x14]
// 006db675  51                   push ecx
// 006db676  8d4d54               lea ecx, [ebp + 0x54]
// 006db679  e8e2430400           call 0x71fa60
// 006db67e  85c0                 test eax, eax
// 006db680  7405                 je 0x6db687
// 006db682  8d78e0               lea edi, [eax - 0x20]
// 006db685  eb02                 jmp 0x6db689
// 006db687  33ff                 xor edi, edi
// 006db689  8b465c               mov eax, dword ptr [esi + 0x5c]
// 006db68c  6a00                 push 0
// 006db68e  50                   push eax
// 006db68f  8bce                 mov ecx, esi
// 006db691  e81a300200           call 0x6fe6b0
// 006db696  8bd8                 mov ebx, eax
// 006db698  897b40               mov dword ptr [ebx + 0x40], edi
// 006db69b  39bda0010000         cmp dword ptr [ebp + 0x1a0], edi
// 006db6a1  750a                 jne 0x6db6ad
// 006db6a3  8b16                 mov edx, dword ptr [esi]
// 006db6a5  8b4220               mov eax, dword ptr [edx + 0x20]
// 006db6a8  53                   push ebx
// 006db6a9  8bce                 mov ecx, esi
// 006db6ab  ffd0                 call eax
// 006db6ad  8b17                 mov edx, dword ptr [edi]
// 006db6af  8b5260               mov edx, dword ptr [edx + 0x60]
// 006db6b2  8d44241c             lea eax, [esp + 0x1c]
// 006db6b6  50                   push eax
// 006db6b7  8bcf                 mov ecx, edi
// 006db6b9  ffd2                 call edx
// 006db6bb  8bc8                 mov ecx, eax
// 006db6bd  c744244000000000     mov dword ptr [esp + 0x40], 0
// 006db6c5  ff1598dd7700         call dword ptr [0x77dd98]
// 006db6cb  50                   push eax
// 006db6cc  8bcb                 mov ecx, ebx
// 006db6ce  e8bd1e0200           call 0x6fd590
// 006db6d3  8d4c241c             lea ecx, [esp + 0x1c]
// 006db6d7  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 006db6df  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006db6e5  8b07                 mov eax, dword ptr [edi]
// 006db6e7  8b5068               mov edx, dword ptr [eax + 0x68]
// 006db6ea  8bcf                 mov ecx, edi
// 006db6ec  ffd2                 call edx
// 006db6ee  50                   push eax
// 006db6ef  8bcb                 mov ecx, ebx
// 006db6f1  e8ca1e0200           call 0x6fd5c0
// 006db6f6  8bcf                 mov ecx, edi
// 006db6f8  e8b33afbff           call 0x68f1b0
// 006db6fd  83e001               and eax, 1
// 006db700  50                   push eax
// 006db701  8bcb                 mov ecx, ebx
// 006db703  e8981a0200           call 0x6fd1a0
// 006db708  837c241400           cmp dword ptr [esp + 0x14], 0
// 006db70d  0f855effffff         jne 0x6db671
// 006db713  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006db717  8b06                 mov eax, dword ptr [esi]
// 006db719  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006db71c  8bce                 mov ecx, esi
// 006db71e  ffd2                 call edx
// 006db720  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 006db724  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 006db728  83ec10               sub esp, 0x10
// 006db72b  8bd4                 mov edx, esp
// 006db72d  891a                 mov dword ptr [edx], ebx
// 006db72f  896a04               mov dword ptr [edx + 4], ebp
// 006db732  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 006db736  896a08               mov dword ptr [edx + 8], ebp
// 006db739  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 006db73d  896a0c               mov dword ptr [edx + 0xc], ebp
// 006db740  8b542458             mov edx, dword ptr [esp + 0x58]
// 006db744  8bc8                 mov ecx, eax
// 006db746  8b00                 mov eax, dword ptr [eax]
// 006db748  8b4060               mov eax, dword ptr [eax + 0x60]
// 006db74b  52                   push edx
// 006db74c  56                   push esi
// 006db74d  ffd0                 call eax
// 006db74f  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 006db753  8b542454             mov edx, dword ptr [esp + 0x54]
// 006db757  899e90000000         mov dword ptr [esi + 0x90], ebx
// 006db75d  898e94000000         mov dword ptr [esi + 0x94], ecx
// 006db763  899698000000         mov dword ptr [esi + 0x98], edx
// 006db769  89ae9c000000         mov dword ptr [esi + 0x9c], ebp
// 006db76f  8b87ac000000         mov eax, dword ptr [edi + 0xac]
// 006db775  85c0                 test eax, eax
// 006db777  741e                 je 0x6db797
// 006db779  83f801               cmp eax, 1
// 006db77c  7419                 je 0x6db797
// 006db77e  8bce                 mov ecx, esi
// 006db780  e84b2e0200           call 0x6fe5d0
// 006db785  03442430             add eax, dword ptr [esp + 0x30]
// 006db789  03442428             add eax, dword ptr [esp + 0x28]
// 006db78d  8d440308             lea eax, [ebx + eax + 8]
// 006db791  8944244c             mov dword ptr [esp + 0x4c], eax
// 006db795  eb1b                 jmp 0x6db7b2
// 006db797  8bce                 mov ecx, esi
// 006db799  e8322e0200           call 0x6fe5d0
// 006db79e  03442430             add eax, dword ptr [esp + 0x30]
// 006db7a2  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 006db7a6  03442428             add eax, dword ptr [esp + 0x28]
// 006db7aa  8d540108             lea edx, [ecx + eax + 8]
// 006db7ae  89542450             mov dword ptr [esp + 0x50], edx
// 006db7b2  837c241800           cmp dword ptr [esp + 0x18], 0
// 006db7b7  0f8567feffff         jne 0x6db624
// 006db7bd  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006db7c1  64890d00000000       mov dword ptr fs:[0], ecx
// 006db7c8  59                   pop ecx
// 006db7c9  5f                   pop edi
// 006db7ca  5e                   pop esi
// 006db7cb  5d                   pop ebp
// 006db7cc  5b                   pop ebx
// 006db7cd  83c430               add esp, 0x30
// 006db7d0  c21400               ret 0x14

struct Sub1 {
    char pad0[0x54];
    int field54;
    char pad58[0x10];
    int field68;
};

struct Sub2 {
    char pad0[0x40];
    int field40;
};

struct Sub3 {
    char pad0[0x90];
    int field90;
    int field94;
    int field98;
    int field9c;
};

struct Sub4 {
    char pad0[0x5c];
    int field5c;
};

struct Sub5 {
    char pad0[0xa0];
    int fielda0;
};

struct Sub6 {
    char pad0[0xe0];
    int fielde0;
};

struct Main {
    char pad0[0x54];
    Sub1 sub1;
    char pad58[0x8];
    int field60;
    char pad64[0x48];
    int fieldac;
    int fieldb0;
    char padb4[0xec];
    int field1a0;

    int method(int, int, int, int, int);
    int func_77dd98();
};


extern "C" int __stdcall func_77ddbc();

int sub_6d99e0(Main*);
int sub_6db4b0(int);
int sub_6db500(int);
int sub_6e0550(Sub1*);
int sub_65e560(Sub1*);
int sub_71fa60(Sub1*, int*);
int sub_6fe6b0(Sub4*, int, int);
int sub_6fd590(Sub2*, int);
int sub_6fd5c0(Sub2*, int);
int sub_68f1b0(Sub3*);
int sub_6fd1a0(Sub2*, int);
int sub_6fe5d0(Sub4*);

int Main::method(int a1, int a2, int a3, int a4, int a5)
{
    int result = 0;
    int local18 = 0;
    int local14 = 0;
    int local1c = 0;
    int local28 = 0;
    int local30 = 0;
    int local4c = 0;
    int local50 = 0;
    int local38 = 0;
    int local3c = 0;
    int local40 = 0;
    int local44 = 0;
    int local48 = 0;

    if (fieldac != 0 || fieldac == 1) {
        Sub1* s1 = (Sub1*)field60;
        if (s1->field68 != 0) {
            Sub6* s6 = (Sub6*)s1->field68;
            int r = ((int (__thiscall*)(Sub6*))*(int*)(*(int*)s6 + 0x14))(s6);
            if (r == 0) {
                result += sub_6d99e0(this);
            }
        }
    }

    sub_6db4b0(fieldb0);

    Sub1* esi = &sub1;
    Sub5* s5 = (Sub5*)sub_6e0550(esi);
    Sub6* s6b = (Sub6*)s5->fielda0;
    int* p = (int*)s6b->fielde0;
    ((void (__thiscall*)(int*, int*))*(int*)(*p + 0x10))(p, &local28);

    local18 = sub_65e560(esi);
    if (local18 != 0) {
        do {
            int* found = (int*)sub_71fa60(esi, &local18);
            Main* ebp;
            if (found != 0) {
                ebp = (Main*)((char*)found - 0x54);
            } else {
                ebp = 0;
            }

            Sub1* ebx = &ebp->sub1;
            int r2 = ((int (__thiscall*)(Sub1*))*(int*)(*(int*)ebx + 0x14))(ebx);
            if (r2 == 0) {
                Sub4* esi2 = (Sub4*)sub_6db500(fieldb0);
                local14 = sub_65e560(ebx);
                if (local14 != 0) {
                    do {
                        int* found2 = (int*)sub_71fa60(ebx, &local14);
                        Sub3* edi;
                        if (found2 != 0) {
                            edi = (Sub3*)((char*)found2 - 0x20);
                        } else {
                            edi = 0;
                        }

                        Sub2* ebx2 = (Sub2*)sub_6fe6b0(esi2, esi2->field5c, 0);
                        ebx2->field40 = (int)edi;

                        if (ebp->field1a0 != (int)edi) {
                            ((void (__thiscall*)(Sub4*, Sub2*))*(int*)(*(int*)esi2 + 0x20))(esi2, ebx2);
                        }

                        int* p2 = (int*)edi;
                        ((void (__thiscall*)(Sub3*, int*))*(int*)(*p2 + 0x60))(edi, &local1c);
                        local40 = 0;
                        sub_6fd590(ebx2, func_77dd98());
                        local40 = -1;
                        func_77ddbc();
                        sub_6fd5c0(ebx2, ((int (__thiscall*)(Sub3*))*(int*)(*p2 + 0x68))(edi));
                        sub_6fd1a0(ebx2, sub_68f1b0(edi) & 1);

                        if (local14 != 0) {
                            continue;
                        }
                        break;
                    } while (1);
                }

                ((void (__thiscall*)(Sub4*))*(int*)(*(int*)esi2 + 0x2c))(esi2);

                local4c = local38;
                local50 = local3c;
                local40 = local44;
                local44 = local48;

                ((void (__thiscall*)(Sub4*, Sub4*, int, int, int, int, int))*(int*)(*(int*)esi2 + 0x60))(
                    esi2, esi2, local4c, local50, local40, local44, local30);

                ((Sub3*)esi2)->field90 = local4c;
                ((Sub3*)esi2)->field94 = local50;
                ((Sub3*)esi2)->field98 = local40;
                ((Sub3*)esi2)->field9c = local44;

                if (fieldac != 0 && fieldac != 1) {
                    int t = sub_6fe5d0(esi2);
                    t += local30;
                    t += local28;
                    local4c = local4c + t + 8;
                } else {
                    int t = sub_6fe5d0(esi2);
                    t += local30;
                    t += local28;
                    local50 = local50 + t + 8;
                }
            }

            if (local18 != 0) {
                continue;
            }
            break;
        } while (1);
    }

    return result;
}
