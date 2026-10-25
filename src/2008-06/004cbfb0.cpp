// from server: 45% by colin
// roc 2008-06 004cbfb0  unit: RBX::VInstance::?$NonFactoryProduct  size: 503 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cbfb0
//
// 004cbfb0  55                   push ebp
// 004cbfb1  8bec                 mov ebp, esp
// 004cbfb3  6aff                 push -1
// 004cbfb5  68b0987c00           push 0x7c98b0
// 004cbfba  64a100000000         mov eax, dword ptr fs:[0]
// 004cbfc0  50                   push eax
// 004cbfc1  64892500000000       mov dword ptr fs:[0], esp
// 004cbfc8  83ec14               sub esp, 0x14
// 004cbfcb  53                   push ebx
// 004cbfcc  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 004cbfcf  56                   push esi
// 004cbfd0  57                   push edi
// 004cbfd1  8b7d08               mov edi, dword ptr [ebp + 8]
// 004cbfd4  8965f0               mov dword ptr [ebp - 0x10], esp
// 004cbfd7  c645ec00             mov byte ptr [ebp - 0x14], 0
// 004cbfdb  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004cbfde  50                   push eax
// 004cbfdf  53                   push ebx
// 004cbfe0  8bf1                 mov esi, ecx
// 004cbfe2  57                   push edi
// 004cbfe3  8975e0               mov dword ptr [ebp - 0x20], esi
// 004cbfe6  e875eeffff           call 0x4cae60
// 004cbfeb  84c0                 test al, al
// 004cbfed  741c                 je 0x4cc00b
// 004cbfef  53                   push ebx
// 004cbff0  57                   push edi
// 004cbff1  8bce                 mov ecx, esi
// 004cbff3  e8e8f8ffff           call 0x4cb8e0
// 004cbff8  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004cbffb  64890d00000000       mov dword ptr fs:[0], ecx
// 004cc002  5f                   pop edi
// 004cc003  5e                   pop esi
// 004cc004  5b                   pop ebx
// 004cc005  8be5                 mov esp, ebp
// 004cc007  5d                   pop ebp
// 004cc008  c20800               ret 8
// 004cc00b  33ff                 xor edi, edi
// 004cc00d  3bdf                 cmp ebx, edi
// 004cc00f  7408                 je 0x4cc019
// 004cc011  8d4b60               lea ecx, [ebx + 0x60]
// 004cc014  894dec               mov dword ptr [ebp - 0x14], ecx
// 004cc017  eb03                 jmp 0x4cc01c
// 004cc019  897dec               mov dword ptr [ebp - 0x14], edi
// 004cc01c  8d55ec               lea edx, [ebp - 0x14]
// 004cc01f  52                   push edx
// 004cc020  e89ba6ffff           call 0x4c66c0
// 004cc025  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004cc028  83c404               add esp, 4
// 004cc02b  3bc7                 cmp eax, edi
// 004cc02d  7408                 je 0x4cc037
// 004cc02f  83c0a0               add eax, -0x60
// 004cc032  8945ec               mov dword ptr [ebp - 0x14], eax
// 004cc035  eb03                 jmp 0x4cc03a
// 004cc037  897dec               mov dword ptr [ebp - 0x14], edi
// 004cc03a  3bf7                 cmp esi, edi
// 004cc03c  7405                 je 0x4cc043
// 004cc03e  8d46f4               lea eax, [esi - 0xc]
// 004cc041  eb02                 jmp 0x4cc045
// 004cc043  33c0                 xor eax, eax
// 004cc045  8b7804               mov edi, dword ptr [eax + 4]
// 004cc048  85f6                 test esi, esi
// 004cc04a  7405                 je 0x4cc051
// 004cc04c  8d46f4               lea eax, [esi - 0xc]
// 004cc04f  eb02                 jmp 0x4cc053
// 004cc051  33c0                 xor eax, eax
// 004cc053  8b5004               mov edx, dword ptr [eax + 4]
// 004cc056  85f6                 test esi, esi
// 004cc058  7405                 je 0x4cc05f
// 004cc05a  8d46f4               lea eax, [esi - 0xc]
// 004cc05d  eb02                 jmp 0x4cc061
// 004cc05f  33c0                 xor eax, eax
// 004cc061  8b4004               mov eax, dword ptr [eax + 4]
// 004cc064  8d4860               lea ecx, [eax + 0x60]
// 004cc067  85db                 test ebx, ebx
// 004cc069  7405                 je 0x4cc070
// 004cc06b  8d4360               lea eax, [ebx + 0x60]
// 004cc06e  eb02                 jmp 0x4cc072
// 004cc070  33c0                 xor eax, eax
// 004cc072  83c768               add edi, 0x68
// 004cc075  57                   push edi
// 004cc076  83c264               add edx, 0x64
// 004cc079  52                   push edx
// 004cc07a  51                   push ecx
// 004cc07b  50                   push eax
// 004cc07c  e85fa9ffff           call 0x4c69e0
// 004cc081  8b7d08               mov edi, dword ptr [ebp + 8]
// 004cc084  83c410               add esp, 0x10
// 004cc087  c645e800             mov byte ptr [ebp - 0x18], 0
// 004cc08b  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 004cc08e  50                   push eax
// 004cc08f  8d4de4               lea ecx, [ebp - 0x1c]
// 004cc092  51                   push ecx
// 004cc093  8d5708               lea edx, [edi + 8]
// 004cc096  52                   push edx
// 004cc097  8bce                 mov ecx, esi
// 004cc099  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004cc0a0  e85bf1ffff           call 0x4cb200
// 004cc0a5  84c0                 test al, al
// 004cc0a7  0f84a8000000         je 0x4cc155
// 004cc0ad  53                   push ebx
// 004cc0ae  57                   push edi
// 004cc0af  8bce                 mov ecx, esi
// 004cc0b1  e82af8ffff           call 0x4cb8e0
// 004cc0b6  84c0                 test al, al
// 004cc0b8  0f8497000000         je 0x4cc155
// 004cc0be  85f6                 test esi, esi
// 004cc0c0  7405                 je 0x4cc0c7
// 004cc0c2  8d46f4               lea eax, [esi - 0xc]
// 004cc0c5  eb02                 jmp 0x4cc0c9
// 004cc0c7  33c0                 xor eax, eax
// 004cc0c9  8b4004               mov eax, dword ptr [eax + 4]
// 004cc0cc  85c0                 test eax, eax
// 004cc0ce  7405                 je 0x4cc0d5
// 004cc0d0  8d4860               lea ecx, [eax + 0x60]
// 004cc0d3  eb02                 jmp 0x4cc0d7
// 004cc0d5  33c9                 xor ecx, ecx
// 004cc0d7  85db                 test ebx, ebx
// 004cc0d9  7405                 je 0x4cc0e0
// 004cc0db  8d4360               lea eax, [ebx + 0x60]
// 004cc0de  eb02                 jmp 0x4cc0e2
// 004cc0e0  33c0                 xor eax, eax
// 004cc0e2  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 004cc0e5  51                   push ecx
// 004cc0e6  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 004cc0e9  51                   push ecx
// 004cc0ea  52                   push edx
// 004cc0eb  50                   push eax
// 004cc0ec  e88fa8ffff           call 0x4c6980
// 004cc0f1  83c410               add esp, 0x10
// 004cc0f4  b001                 mov al, 1
// 004cc0f6  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004cc0f9  64890d00000000       mov dword ptr fs:[0], ecx
// 004cc100  5f                   pop edi
// 004cc101  5e                   pop esi
// 004cc102  5b                   pop ebx
// 004cc103  8be5                 mov esp, ebp
// 004cc105  5d                   pop ebp
// 004cc106  c20800               ret 8
// 004cc109  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 004cc10c  85c0                 test eax, eax
// 004cc10e  7405                 je 0x4cc115
// 004cc110  83c0f4               add eax, -0xc
// 004cc113  eb02                 jmp 0x4cc117
// 004cc115  33c0                 xor eax, eax
// 004cc117  8b4004               mov eax, dword ptr [eax + 4]
// 004cc11a  85c0                 test eax, eax
// 004cc11c  7405                 je 0x4cc123
// 004cc11e  8d5060               lea edx, [eax + 0x60]
// 004cc121  eb02                 jmp 0x4cc125
// 004cc123  33d2                 xor edx, edx
// 004cc125  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004cc128  85c0                 test eax, eax
// 004cc12a  7405                 je 0x4cc131
// 004cc12c  8d4860               lea ecx, [eax + 0x60]
// 004cc12f  eb02                 jmp 0x4cc133
// 004cc131  33c9                 xor ecx, ecx
// 004cc133  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004cc136  85c0                 test eax, eax
// 004cc138  7405                 je 0x4cc13f
// 004cc13a  83c060               add eax, 0x60
// 004cc13d  eb02                 jmp 0x4cc141
// 004cc13f  33c0                 xor eax, eax
// 004cc141  52                   push edx
// 004cc142  51                   push ecx
// 004cc143  50                   push eax
// 004cc144  e8e7d7ffff           call 0x4c9930
// 004cc149  83c40c               add esp, 0xc
// 004cc14c  6a00                 push 0
// 004cc14e  6a00                 push 0
// 004cc150  e837541d00           call 0x6a158c
// 004cc155  85f6                 test esi, esi
// 004cc157  7405                 je 0x4cc15e
// 004cc159  8d46f4               lea eax, [esi - 0xc]
// 004cc15c  eb02                 jmp 0x4cc160
// 004cc15e  33c0                 xor eax, eax
// 004cc160  8b4004               mov eax, dword ptr [eax + 4]
// 004cc163  85c0                 test eax, eax
// 004cc165  7405                 je 0x4cc16c
// 004cc167  8d5060               lea edx, [eax + 0x60]
// 004cc16a  eb02                 jmp 0x4cc16e
// 004cc16c  33d2                 xor edx, edx
// 004cc16e  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 004cc171  85c9                 test ecx, ecx
// 004cc173  7405                 je 0x4cc17a
// 004cc175  83c160               add ecx, 0x60
// 004cc178  eb02                 jmp 0x4cc17c
// 004cc17a  33c9                 xor ecx, ecx
// 004cc17c  85db                 test ebx, ebx
// 004cc17e  7405                 je 0x4cc185
// 004cc180  8d4360               lea eax, [ebx + 0x60]
// 004cc183  eb02                 jmp 0x4cc187
// 004cc185  33c0                 xor eax, eax
// 004cc187  52                   push edx
// 004cc188  51                   push ecx
// 004cc189  50                   push eax
// 004cc18a  e8a1d7ffff           call 0x4c9930
// 004cc18f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004cc192  83c40c               add esp, 0xc
// 004cc195  5f                   pop edi
// 004cc196  5e                   pop esi
// 004cc197  32c0                 xor al, al
// 004cc199  64890d00000000       mov dword ptr fs:[0], ecx
// 004cc1a0  5b                   pop ebx
// 004cc1a1  8be5                 mov esp, ebp
// 004cc1a3  5d                   pop ebp
// 004cc1a4  c20800               ret 8

// from server: 54% by colin
// roc-cl: 21022
// roc-flags: /GS- /EHsc /MD /O2 /Ob0 /Oy-
struct VInstance {
    char pad0[8];
    int field8;
};

struct Inner {
    char pad0[4];
    int field4;
};

struct Base {
    char pad0[0x60];
};

extern "C" bool __cdecl sub_4cae60(int, int, int);
extern "C" bool __cdecl sub_4cb8e0();
extern "C" void __cdecl sub_4c66c0(void*);
extern "C" void __cdecl sub_4c69e0(void*, void*, void*, void*);
extern "C" bool __cdecl sub_4cb200(int, void*, void*);
extern "C" void __cdecl sub_4c6980(void*, void*, void*, void*);

struct S {
    bool method(VInstance* a, VInstance* b);
};

bool S::method(VInstance* a, VInstance* b)
{
    char local1 = 0;
    if (sub_4cae60((int)a, (int)b, (int)local1)) {
        return sub_4cb8e0();
    }

    void* p1 = 0;
    if (b != 0) {
        p1 = (char*)b + 0x60;
    }
    sub_4c66c0(&p1);
    void* p2 = p1;
    if (p2 != 0) {
        p2 = (char*)p2 - 0x60;
    } else {
        p2 = 0;
    }

    Inner* inner;
    if (this != 0) {
        inner = (Inner*)((char*)this - 0xc);
    } else {
        inner = 0;
    }
    int v1 = inner->field4;

    Inner* inner2;
    if (this != 0) {
        inner2 = (Inner*)((char*)this - 0xc);
    } else {
        inner2 = 0;
    }
    int v2 = inner2->field4;

    Inner* inner3;
    if (this != 0) {
        inner3 = (Inner*)((char*)this - 0xc);
    } else {
        inner3 = 0;
    }
    int v3 = inner3->field4;

    void* q1;
    if (b != 0) {
        q1 = (char*)b + 0x60;
    } else {
        q1 = 0;
    }

    sub_4c69e0(q1, (void*)(v3 + 0x60), (void*)(v2 + 0x64), (void*)(v1 + 0x68));

    char local2 = 0;
    int local3;
    if (sub_4cb200((int)this, (void*)((char*)a + 8), &local3)) {
        if (sub_4cb8e0()) {
            Inner* inner4;
            if (this != 0) {
                inner4 = (Inner*)((char*)this - 0xc);
            } else {
                inner4 = 0;
            }
            int w1 = inner4->field4;
            void* r1;
            if (w1 != 0) {
                r1 = (char*)w1 + 0x60;
            } else {
                r1 = 0;
            }
            void* r2;
            if (b != 0) {
                r2 = (char*)b + 0x60;
            } else {
                r2 = 0;
            }
            sub_4c6980(r2, (void*)local3, (void*)local2, r1);
            return true;
        }
    }
    return false;
}
