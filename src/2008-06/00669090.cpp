// from server: 100% by king_originala
// roc 2008-06 00669090  unit: RBX::TreeStage  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00669090
//
// 00669090  51                   push ecx
// 00669091  53                   push ebx
// 00669092  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00669096  55                   push ebp
// 00669097  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0066909b  56                   push esi
// 0066909c  8b742414             mov esi, dword ptr [esp + 0x14]
// 006690a0  57                   push edi
// 006690a1  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006690a5  894c2410             mov dword ptr [esp + 0x10], ecx
// 006690a9  8da42400000000       lea esp, [esp]
// 006690b0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006690b4  8b442424             mov eax, dword ptr [esp + 0x24]
// 006690b8  3bc8                 cmp ecx, eax
// 006690ba  742e                 je 0x6690ea
// 006690bc  53                   push ebx
// 006690bd  55                   push ebp
// 006690be  7e15                 jle 0x6690d5
// 006690c0  49                   dec ecx
// 006690c1  56                   push esi
// 006690c2  894c242c             mov dword ptr [esp + 0x2c], ecx
// 006690c6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006690ca  6a00                 push 0
// 006690cc  e8cffdffff           call 0x668ea0
// 006690d1  8bf0                 mov esi, eax
// 006690d3  ebdb                 jmp 0x6690b0
// 006690d5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006690d9  57                   push edi
// 006690da  48                   dec eax
// 006690db  6a01                 push 1
// 006690dd  89442434             mov dword ptr [esp + 0x34], eax
// 006690e1  e8bafdffff           call 0x668ea0
// 006690e6  8bf8                 mov edi, eax
// 006690e8  ebc6                 jmp 0x6690b0
// 006690ea  3bf7                 cmp esi, edi
// 006690ec  7451                 je 0x66913f
// 006690ee  85f6                 test esi, esi
// 006690f0  7412                 je 0x669104
// 006690f2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006690f6  53                   push ebx
// 006690f7  55                   push ebp
// 006690f8  56                   push esi
// 006690f9  6a00                 push 0
// 006690fb  e8a0fdffff           call 0x668ea0
// 00669100  8bf0                 mov esi, eax
// 00669102  eb02                 jmp 0x669106
// 00669104  33f6                 xor esi, esi
// 00669106  85ff                 test edi, edi
// 00669108  741f                 je 0x669129
// 0066910a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0066910e  53                   push ebx
// 0066910f  55                   push ebp
// 00669110  57                   push edi
// 00669111  6a01                 push 1
// 00669113  e888fdffff           call 0x668ea0
// 00669118  b901000000           mov ecx, 1
// 0066911d  294c2424             sub dword ptr [esp + 0x24], ecx
// 00669121  294c2420             sub dword ptr [esp + 0x20], ecx
// 00669125  8bf8                 mov edi, eax
// 00669127  eb87                 jmp 0x6690b0
// 00669129  b901000000           mov ecx, 1
// 0066912e  294c2424             sub dword ptr [esp + 0x24], ecx
// 00669132  33c0                 xor eax, eax
// 00669134  294c2420             sub dword ptr [esp + 0x20], ecx
// 00669138  8bf8                 mov edi, eax
// 0066913a  e971ffffff           jmp 0x6690b0
// 0066913f  5f                   pop edi
// 00669140  5e                   pop esi
// 00669141  5d                   pop ebp
// 00669142  5b                   pop ebx
// 00669143  59                   pop ecx
// 00669144  c21800               ret 0x18

struct Edge;

struct Stage {
    Edge* ascend(bool side, Edge* edge, void* context0, void* context1);
    void reconcile(Edge* left, Edge* right, int leftDepth, int rightDepth,
                   void* context0, void* context1);
};

void Stage::reconcile(Edge* left, Edge* right, int leftDepth, int rightDepth,
                      void* context0, void* context1)
{
    for (;;) {
        if (leftDepth != rightDepth) {
            if (leftDepth > rightDepth) {
                --leftDepth;
                left = ascend(false, left, context0, context1);
            } else {
                --rightDepth;
                right = ascend(true, right, context0, context1);
            }
        } else {
            if (left == right)
                return;

            left = left ? ascend(false, left, context0, context1) : 0;
            Edge* nextRight = right ? ascend(true, right, context0, context1) : 0;
            --rightDepth;
            --leftDepth;
            right = nextRight;
        }
    }
}
