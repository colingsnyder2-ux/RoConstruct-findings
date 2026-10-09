// from server: 71% by colin
// roc 2007-08 006e2cd0  unit: CXTPDockingPaneTabbedContainer  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e2cd0
//
// 006e2cd0  56                   push esi
// 006e2cd1  8bf1                 mov esi, ecx
// 006e2cd3  33d2                 xor edx, edx
// 006e2cd5  399604010000         cmp dword ptr [esi + 0x104], edx
// 006e2cdb  57                   push edi
// 006e2cdc  7e1b                 jle 0x6e2cf9
// 006e2cde  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e2ce2  52                   push edx
// 006e2ce3  8bce                 mov ecx, esi
// 006e2ce5  e896f2ffff           call 0x6e1f80
// 006e2cea  3bc7                 cmp eax, edi
// 006e2cec  7412                 je 0x6e2d00
// 006e2cee  83c201               add edx, 1
// 006e2cf1  3b9604010000         cmp edx, dword ptr [esi + 0x104]
// 006e2cf7  7ce9                 jl 0x6e2ce2
// 006e2cf9  5f                   pop edi
// 006e2cfa  33c0                 xor eax, eax
// 006e2cfc  5e                   pop esi
// 006e2cfd  c20400               ret 4
// 006e2d00  85d2                 test edx, edx
// 006e2d02  7cf5                 jl 0x6e2cf9
// 006e2d04  3b9604010000         cmp edx, dword ptr [esi + 0x104]
// 006e2d0a  7ded                 jge 0x6e2cf9
// 006e2d0c  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 006e2d12  8b0490               mov eax, dword ptr [eax + edx*4]
// 006e2d15  5f                   pop edi
// 006e2d16  5e                   pop esi
// 006e2d17  c20400               ret 4

struct CXTPDockingPaneTabbedContainer {
    char pad[0x100];
    int* field_0x100;
    int field_0x104;
    int GetPane(int index);
    int FindPane(int pane);
};

int CXTPDockingPaneTabbedContainer::FindPane(int pane) {
    int i = 0;
    if (this->field_0x104 > 0) {
        do {
            if (this->GetPane(i) == pane) {
                if (i >= 0 && i < this->field_0x104) {
                    return this->field_0x100[i];
                }
                break;
            }
            i++;
        } while (i < this->field_0x104);
    }
    return 0;
}
