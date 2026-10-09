// from server: 58% by colin
// roc 2007-08 00670240  unit: CXTPDockingPaneManager  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00670240
//
// 00670240  8911                 mov dword ptr [ecx], edx
// 00670242  8b5004               mov edx, dword ptr [eax + 4]
// 00670245  895104               mov dword ptr [ecx + 4], edx
// 00670248  8b5008               mov edx, dword ptr [eax + 8]
// 0067024b  8b400c               mov eax, dword ptr [eax + 0xc]
// 0067024e  895108               mov dword ptr [ecx + 8], edx
// 00670251  89410c               mov dword ptr [ecx + 0xc], eax
// 00670254  57                   push edi
// 00670255  8bcb                 mov ecx, ebx
// 00670257  e894e2ffff           call 0x66e4f0
// 0067025c  837c241000           cmp dword ptr [esp + 0x10], 0
// 00670261  7407                 je 0x67026a
// 00670263  b809000000           mov eax, 9
// 00670268  eb10                 jmp 0x67027a
// 0067026a  33c0                 xor eax, eax
// 0067026c  39442428             cmp dword ptr [esp + 0x28], eax
// 00670270  0f94c0               sete al
// 00670273  8d048501000000       lea eax, [eax*4 + 1]
// 0067027a  6a00                 push 0
// 0067027c  6a00                 push 0
// 0067027e  55                   push ebp
// 0067027f  50                   push eax
// 00670280  8bcb                 mov ecx, ebx
// 00670282  e879ddffff           call 0x66e000
// 00670287  5f                   pop edi
// 00670288  5e                   pop esi
// 00670289  5d                   pop ebp
// 0067028a  b801000000           mov eax, 1
// 0067028f  5b                   pop ebx
// 00670290  83c414               add esp, 0x14
// 00670293  c20800               ret 8

struct CXTPDockingPaneManager {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int sub_66E4F0();
    int sub_66E000(int, int, int, int);
    int func_00670240(int* src, int a, int b);
};

int CXTPDockingPaneManager::func_00670240(int* src, int a, int b)
{
    field0 = src[0];
    field4 = src[1];
    field8 = src[2];
    fieldC = src[3];

    sub_66E4F0();

    int v;
    if (a != 0) {
        v = 9;
    } else {
        v = (b != 0) ? 1 : 5;
    }

    sub_66E000(v, 0, 0, 0);
    return 1;
}
