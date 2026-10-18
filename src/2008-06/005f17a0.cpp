// from server: 32% by colin
// roc 2008-06 005f17a0  unit: RBX::FaceInstance  size: 903 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f17a0
//
// 005f17a0  64a100000000         mov eax, dword ptr fs:[0]
// 005f17a6  6aff                 push -1
// 005f17a8  6821727d00           push 0x7d7221
// 005f17ad  50                   push eax
// 005f17ae  64892500000000       mov dword ptr fs:[0], esp
// 005f17b5  83ec4c               sub esp, 0x4c
// 005f17b8  f605b4b5970001       test byte ptr [0x97b5b4], 1
// 005f17bf  53                   push ebx
// 005f17c0  55                   push ebp
// 005f17c1  56                   push esi
// 005f17c2  8bd9                 mov ebx, ecx
// 005f17c4  752b                 jne 0x5f17f1
// 005f17c6  830db4b5970001       or dword ptr [0x97b5b4], 1
// 005f17cd  83ceff               or esi, 0xffffffff
// 005f17d0  56                   push esi
// 005f17d1  68d4f78000           push 0x80f7d4
// 005f17d6  c744246800000000     mov dword ptr [esp + 0x68], 0
// 005f17de  e8ad27f6ff           call 0x553f90
// 005f17e3  83c408               add esp, 8
// 005f17e6  a3b0b59700           mov dword ptr [0x97b5b0], eax
// 005f17eb  89742460             mov dword ptr [esp + 0x60], esi
// 005f17ef  eb03                 jmp 0x5f17f4
// 005f17f1  83ceff               or esi, 0xffffffff
// 005f17f4  f605b4b5970002       test byte ptr [0x97b5b4], 2
// 005f17fb  7526                 jne 0x5f1823
// 005f17fd  830db4b5970002       or dword ptr [0x97b5b4], 2
// 005f1804  56                   push esi
// 005f1805  6814088400           push 0x840814
// 005f180a  c744246801000000     mov dword ptr [esp + 0x68], 1
// 005f1812  e87927f6ff           call 0x553f90
// 005f1817  83c408               add esp, 8
// 005f181a  a3acb59700           mov dword ptr [0x97b5ac], eax
// 005f181f  89742460             mov dword ptr [esp + 0x60], esi
// 005f1823  f605b4b5970004       test byte ptr [0x97b5b4], 4
// 005f182a  7526                 jne 0x5f1852
// 005f182c  830db4b5970004       or dword ptr [0x97b5b4], 4
// 005f1833  56                   push esi
// 005f1834  680c088400           push 0x84080c
// 005f1839  c744246802000000     mov dword ptr [esp + 0x68], 2
// 005f1841  e84a27f6ff           call 0x553f90
// 005f1846  83c408               add esp, 8
// 005f1849  a3a8b59700           mov dword ptr [0x97b5a8], eax
// 005f184e  89742460             mov dword ptr [esp + 0x60], esi
// 005f1852  b808000000           mov eax, 8
// 005f1857  8405b4b59700         test byte ptr [0x97b5b4], al
// 005f185d  7525                 jne 0x5f1884
// 005f185f  0905b4b59700         or dword ptr [0x97b5b4], eax
// 005f1865  56                   push esi
// 005f1866  6804088400           push 0x840804
// 005f186b  c744246803000000     mov dword ptr [esp + 0x68], 3
// 005f1873  e81827f6ff           call 0x553f90
// 005f1878  83c408               add esp, 8
// 005f187b  a3a4b59700           mov dword ptr [0x97b5a4], eax
// 005f1880  89742460             mov dword ptr [esp + 0x60], esi
// 005f1884  f605b4b5970010       test byte ptr [0x97b5b4], 0x10
// 005f188b  7526                 jne 0x5f18b3
// 005f188d  830db4b5970010       or dword ptr [0x97b5b4], 0x10
// 005f1894  56                   push esi
// 005f1895  68f8078400           push 0x8407f8
// 005f189a  c744246804000000     mov dword ptr [esp + 0x68], 4
// 005f18a2  e8e926f6ff           call 0x553f90
// 005f18a7  83c408               add esp, 8
// 005f18aa  a3a0b59700           mov dword ptr [0x97b5a0], eax
// 005f18af  89742460             mov dword ptr [esp + 0x60], esi
// 005f18b3  8b442468             mov eax, dword ptr [esp + 0x68]
// 005f18b7  8b6804               mov ebp, dword ptr [eax + 4]
// 005f18ba  85ed                 test ebp, ebp
// 005f18bc  0f8451020000         je 0x5f1b13
// 005f18c2  57                   push edi
// 005f18c3  bf10000000           mov edi, 0x10
// 005f18c8  eb06                 jmp 0x5f18d0
// 005f18ca  8d9b00000000         lea ebx, [ebx]
// 005f18d0  8bcd                 mov ecx, ebp
// 005f18d2  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 005f18da  e831aff8ff           call 0x57c810
// 005f18df  84c0                 test al, al
// 005f18e1  0f8520020000         jne 0x5f1b07
// 005f18e7  8b0d38539700         mov ecx, dword ptr [0x975338]
// 005f18ed  51                   push ecx
// 005f18ee  8bcd                 mov ecx, ebp
// 005f18f0  e8bba9f8ff           call 0x57c2b0
// 005f18f5  85c0                 test eax, eax
// 005f18f7  0f840a020000         je 0x5f1b07
// 005f18fd  8d54246c             lea edx, [esp + 0x6c]
// 005f1901  52                   push edx
// 005f1902  8d4808               lea ecx, [eax + 8]
// 005f1905  e856aaf8ff           call 0x57c360
// 005f190a  84c0                 test al, al
// 005f190c  0f84f5010000         je 0x5f1b07
// 005f1912  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 005f1916  3b05b0b59700         cmp eax, dword ptr [0x97b5b0]
// 005f191c  0f8582000000         jne 0x5f19a4
// 005f1922  8d4c2424             lea ecx, [esp + 0x24]
// 005f1926  ff1560248000         call dword ptr [0x802460]
// 005f192c  8d442424             lea eax, [esp + 0x24]
// 005f1930  50                   push eax
// 005f1931  8d4d10               lea ecx, [ebp + 0x10]
// 005f1934  c744246805000000     mov dword ptr [esp + 0x68], 5
// 005f193c  e8cfa8f8ff           call 0x57c210
// 005f1941  84c0                 test al, al
// 005f1943  0f84da000000         je 0x5f1a23
// 005f1949  397c243c             cmp dword ptr [esp + 0x3c], edi
// 005f194d  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005f1951  7304                 jae 0x5f1957
// 005f1953  8d7c2428             lea edi, [esp + 0x28]
// 005f1957  681cb19700           push 0x97b11c
// 005f195c  6820d65e00           push 0x5ed620
// 005f1961  e8ca59f6ff           call 0x557330
// 005f1966  83c408               add esp, 8
// 005f1969  e852bcffff           call 0x5ed5c0
// 005f196e  8d4c2410             lea ecx, [esp + 0x10]
// 005f1972  51                   push ecx
// 005f1973  57                   push edi
// 005f1974  8bf0                 mov esi, eax
// 005f1976  e81529f6ff           call 0x554290
// 005f197b  83c404               add esp, 4
// 005f197e  50                   push eax
// 005f197f  8bce                 mov ecx, esi
// 005f1981  e87ab9ffff           call 0x5ed300
// 005f1986  8bcb                 mov ecx, ebx
// 005f1988  84c0                 test al, al
// 005f198a  740f                 je 0x5f199b
// 005f198c  8b542410             mov edx, dword ptr [esp + 0x10]
// 005f1990  52                   push edx
// 005f1991  e84afaffff           call 0x5f13e0
// 005f1996  e985000000           jmp 0x5f1a20
// 005f199b  6a00                 push 0
// 005f199d  e83efaffff           call 0x5f13e0
// 005f19a2  eb7c                 jmp 0x5f1a20
// 005f19a4  3b05acb59700         cmp eax, dword ptr [0x97b5ac]
// 005f19aa  0f858b000000         jne 0x5f1a3b
// 005f19b0  8d4c2424             lea ecx, [esp + 0x24]
// 005f19b4  ff1560248000         call dword ptr [0x802460]
// 005f19ba  8d442424             lea eax, [esp + 0x24]
// 005f19be  50                   push eax
// 005f19bf  8d4d10               lea ecx, [ebp + 0x10]
// 005f19c2  c744246806000000     mov dword ptr [esp + 0x68], 6
// 005f19ca  e841a8f8ff           call 0x57c210
// 005f19cf  84c0                 test al, al
// 005f19d1  7450                 je 0x5f1a23
// 005f19d3  397c243c             cmp dword ptr [esp + 0x3c], edi
// 005f19d7  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005f19db  7304                 jae 0x5f19e1
// 005f19dd  8d7c2428             lea edi, [esp + 0x28]
// 005f19e1  6820b19700           push 0x97b120
// 005f19e6  6890d65e00           push 0x5ed690
// 005f19eb  e84059f6ff           call 0x557330
// 005f19f0  83c408               add esp, 8
// 005f19f3  e838bcffff           call 0x5ed630
// 005f19f8  8d4c2414             lea ecx, [esp + 0x14]
// 005f19fc  51                   push ecx
// 005f19fd  57                   push edi
// 005f19fe  8bf0                 mov esi, eax
// 005f1a00  e88b28f6ff           call 0x554290
// 005f1a05  83c404               add esp, 4
// 005f1a08  50                   push eax
// 005f1a09  8bce                 mov ecx, esi
// 005f1a0b  e8f0b8ffff           call 0x5ed300
// 005f1a10  84c0                 test al, al
// 005f1a12  740c                 je 0x5f1a20
// 005f1a14  8b542414             mov edx, dword ptr [esp + 0x14]
// 005f1a18  52                   push edx
// 005f1a19  8bcb                 mov ecx, ebx
// 005f1a1b  e810faffff           call 0x5f1430
// 005f1a20  83ceff               or esi, 0xffffffff
// 005f1a23  8d4c2424             lea ecx, [esp + 0x24]
// 005f1a27  89742464             mov dword ptr [esp + 0x64], esi
// 005f1a2b  ff1568248000         call dword ptr [0x802468]
// 005f1a31  bf10000000           mov edi, 0x10
// 005f1a36  e9cc000000           jmp 0x5f1b07
// 005f1a3b  3b05a8b59700         cmp eax, dword ptr [0x97b5a8]
// 005f1a41  7529                 jne 0x5f1a6c
// 005f1a43  8d442418             lea eax, [esp + 0x18]
// 005f1a47  50                   push eax
// 005f1a48  8d4d10               lea ecx, [ebp + 0x10]
// 005f1a4b  e8c0abf8ff           call 0x57c610
// 005f1a50  84c0                 test al, al
// 005f1a52  0f84af000000         je 0x5f1b07
// 005f1a58  d9442418             fld dword ptr [esp + 0x18]
// 005f1a5c  51                   push ecx
// 005f1a5d  8bcb                 mov ecx, ebx
// 005f1a5f  d91c24               fstp dword ptr [esp]
// 005f1a62  e889faffff           call 0x5f14f0
// 005f1a67  e99b000000           jmp 0x5f1b07
// 005f1a6c  3b05a4b59700         cmp eax, dword ptr [0x97b5a4]
// 005f1a72  7526                 jne 0x5f1a9a
// 005f1a74  8d4c241c             lea ecx, [esp + 0x1c]
// 005f1a78  51                   push ecx
// 005f1a79  8d4d10               lea ecx, [ebp + 0x10]
// 005f1a7c  e88fabf8ff           call 0x57c610
// 005f1a81  84c0                 test al, al
// 005f1a83  0f847e000000         je 0x5f1b07
// 005f1a89  d944241c             fld dword ptr [esp + 0x1c]
// 005f1a8d  51                   push ecx
// 005f1a8e  8bcb                 mov ecx, ebx
// 005f1a90  d91c24               fstp dword ptr [esp]
// 005f1a93  e828fbffff           call 0x5f15c0
// 005f1a98  eb6d                 jmp 0x5f1b07
// 005f1a9a  3b05a0b59700         cmp eax, dword ptr [0x97b5a0]
// 005f1aa0  7565                 jne 0x5f1b07
// 005f1aa2  8d4c2440             lea ecx, [esp + 0x40]
// 005f1aa6  ff1560248000         call dword ptr [0x802460]
// 005f1aac  8d542440             lea edx, [esp + 0x40]
// 005f1ab0  52                   push edx
// 005f1ab1  8d4d10               lea ecx, [ebp + 0x10]
// 005f1ab4  c744246807000000     mov dword ptr [esp + 0x68], 7
// 005f1abc  e84fa7f8ff           call 0x57c210
// 005f1ac1  84c0                 test al, al
// 005f1ac3  7434                 je 0x5f1af9
// 005f1ac5  8b442444             mov eax, dword ptr [esp + 0x44]
// 005f1ac9  397c2458             cmp dword ptr [esp + 0x58], edi
// 005f1acd  7304                 jae 0x5f1ad3
// 005f1acf  8d442444             lea eax, [esp + 0x44]
// 005f1ad3  8d4c2420             lea ecx, [esp + 0x20]
// 005f1ad7  51                   push ecx
// 005f1ad8  50                   push eax
// 005f1ad9  e8c2bbffff           call 0x5ed6a0
// 005f1ade  8bc8                 mov ecx, eax
// 005f1ae0  e81bbdffff           call 0x5ed800
// 005f1ae5  84c0                 test al, al
// 005f1ae7  7410                 je 0x5f1af9
// 005f1ae9  8b442420             mov eax, dword ptr [esp + 0x20]
// 005f1aed  85c0                 test eax, eax
// 005f1aef  7408                 je 0x5f1af9
// 005f1af1  50                   push eax
// 005f1af2  8bcb                 mov ecx, ebx
// 005f1af4  e8e7f8ffff           call 0x5f13e0
// 005f1af9  8d4c2440             lea ecx, [esp + 0x40]
// 005f1afd  89742464             mov dword ptr [esp + 0x64], esi
// 005f1b01  ff1568248000         call dword ptr [0x802468]
// 005f1b07  8b6d00               mov ebp, dword ptr [ebp]
// 005f1b0a  85ed                 test ebp, ebp
// 005f1b0c  0f85befdffff         jne 0x5f18d0
// 005f1b12  5f                   pop edi
// 005f1b13  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 005f1b17  5e                   pop esi
// 005f1b18  5d                   pop ebp
// 005f1b19  5b                   pop ebx
// 005f1b1a  64890d00000000       mov dword ptr fs:[0], ecx
// 005f1b21  83c458               add esp, 0x58
// 005f1b24  c20800               ret 8

struct Instance {
    char pad[0x10];
    void process(int a, int b);
};

extern "C" {
    int __stdcall sub_553F90(int, const char*);
    void* __cdecl sub_554290(void*, const char*);
    void __cdecl sub_557330(void*, void*);
    int __cdecl sub_57C210(void*, void*);
    void* __cdecl sub_57C2B0(void*, void*);
    int __cdecl sub_57C360(void*, void*);
    int __cdecl sub_57C610(void*, void*);
    int __cdecl sub_57C810(void*);
    int __cdecl sub_5ED300(void*, void*);
    void* __cdecl sub_5ED5C0();
    void* __cdecl sub_5ED630();
    int __cdecl sub_5ED6A0(void*, void*);
    int __cdecl sub_5ED800(void*);
    void __cdecl sub_5F13E0(void*, void*);
    void __cdecl sub_5F1430(void*, void*);
    void __cdecl sub_5F14F0(void*, float);
    void __cdecl sub_5F15C0(void*, float);
    void __cdecl sub_802460(void*);
    void __cdecl sub_802468(void*);
}

extern int dword_97B5B0;
extern int dword_97B5AC;
extern int dword_97B5A8;
extern int dword_97B5A4;
extern int dword_97B5A0;
extern int dword_97B5B4;
extern void* dword_975338;
extern void* dword_97B11C;
extern void* dword_97B120;

void Instance::process(int a, int b)
{
    if (!(dword_97B5B4 & 1)) {
        dword_97B5B4 |= 1;
        dword_97B5B0 = sub_553F90(-1, "Type");
    }
    if (!(dword_97B5B4 & 2)) {
        dword_97B5B4 |= 2;
        dword_97B5AC = sub_553F90(-1, "SurfaceInput");
    }
    if (!(dword_97B5B4 & 4)) {
        dword_97B5B4 |= 4;
        dword_97B5A8 = sub_553F90(-1, "ParamA");
    }
    if (!(dword_97B5B4 & 8)) {
        dword_97B5B4 |= 8;
        dword_97B5A4 = sub_553F90(-1, "ParamB");
    }
    if (!(dword_97B5B4 & 0x10)) {
        dword_97B5B4 |= 0x10;
        dword_97B5A0 = sub_553F90(-1, "Constraint");
    }

    void* node = *(void**)((char*)&a + 4);
    while (node) {
        int val = 0;
        if (sub_57C810(node)) {
            node = *(void**)node;
            continue;
        }
        void* r = sub_57C2B0(node, dword_975338);
        if (!r) {
            node = *(void**)node;
            continue;
        }
        if (!sub_57C360((char*)r + 8, &val)) {
            node = *(void**)node;
            continue;
        }

        if (val == dword_97B5B0) {
            char buf[0x18];
            sub_802460(buf);
            if (sub_57C210((char*)node + 0x10, buf)) {
                char* p;
                if (*(int*)(buf + 0x14) >= 0x10)
                    p = *(char**)(buf + 4);
                else
                    p = buf + 4;
                sub_557330((void*)0x97B11C, (void*)0x5ED620);
                void* obj = sub_5ED5C0();
                char tmp[4];
                void* s = sub_554290(tmp, p);
                int ok = sub_5ED300(obj, s);
                if (ok) {
                    sub_5F13E0(this, *(void**)tmp);
                } else {
                    sub_5F13E0(this, 0);
                }
            }
            sub_802468(buf);
        } else if (val == dword_97B5AC) {
            char buf[0x18];
            sub_802460(buf);
            if (sub_57C210((char*)node + 0x10, buf)) {
                char* p;
                if (*(int*)(buf + 0x14) >= 0x10)
                    p = *(char**)(buf + 4);
                else
                    p = buf + 4;
                sub_557330((void*)0x97B120, (void*)0x5ED690);
                void* obj = sub_5ED630();
                char tmp[4];
                void* s = sub_554290(tmp, p);
                int ok = sub_5ED300(obj, s);
                if (ok) {
                    sub_5F1430(this, *(void**)tmp);
                }
            }
            sub_802468(buf);
        } else if (val == dword_97B5A8) {
            float f;
            if (sub_57C610((char*)node + 0x10, &f)) {
                sub_5F14F0(this, f);
            }
        } else if (val == dword_97B5A4) {
            float f;
            if (sub_57C610((char*)node + 0x10, &f)) {
                sub_5F15C0(this, f);
            }
        } else if (val == dword_97B5A0) {
            char buf[0x18];
            sub_802460(buf);
            if (sub_57C210((char*)node + 0x10, buf)) {
                char* p;
                if (*(int*)(buf + 0x14) >= 0x10)
                    p = *(char**)(buf + 4);
                else
                    p = buf + 4;
                char tmp[4];
                sub_5ED6A0(tmp, p);
                if (sub_5ED800(tmp)) {
                    void* v = *(void**)tmp;
                    if (v) {
                        sub_5F13E0(this, v);
                    }
                }
            }
            sub_802468(buf);
        }
        node = *(void**)node;
    }
}
