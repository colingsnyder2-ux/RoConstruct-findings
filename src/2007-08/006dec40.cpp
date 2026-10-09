// from server: 85% by colin
// roc 2007-08 006dec40  unit: CXTPDockingPaneMiniWnd  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dec40
//
// 006dec40  57                   push edi
// 006dec41  8bf9                 mov edi, ecx
// 006dec43  e818f9ffff           call 0x6de560
// 006dec48  85c0                 test eax, eax
// 006dec4a  7430                 je 0x6dec7c
// 006dec4c  56                   push esi
// 006dec4d  8b742410             mov esi, dword ptr [esp + 0x10]
// 006dec51  830603               add dword ptr [esi], 3
// 006dec54  83460403             add dword ptr [esi + 4], 3
// 006dec58  b8fdffffff           mov eax, 0xfffffffd
// 006dec5d  014608               add dword ptr [esi + 8], eax
// 006dec60  01460c               add dword ptr [esi + 0xc], eax
// 006dec63  8d8fe4000000         lea ecx, [edi + 0xe4]
// 006dec69  e8e2180000           call 0x6e0550
// 006dec6e  8b4078               mov eax, dword ptr [eax + 0x78]
// 006dec71  83c002               add eax, 2
// 006dec74  014604               add dword ptr [esi + 4], eax
// 006dec77  5e                   pop esi
// 006dec78  5f                   pop edi
// 006dec79  c20800               ret 8
// 006dec7c  8bcf                 mov ecx, edi
// 006dec7e  e8bb15f5ff           call 0x63023e
// 006dec83  5f                   pop edi
// 006dec84  c20800               ret 8

struct CXTPDockingPaneMiniWnd {
    int sub_6DE560();
    int sub_6E0550();
    int sub_63023E();
    int OnNcCalcSize(int, int*);
};

int CXTPDockingPaneMiniWnd::OnNcCalcSize(int a, int* b) {
    if (sub_6DE560()) {
        b[0] += 3;
        b[1] += 3;
        b[2] -= 3;
        b[3] -= 3;
        int* p = (int*)sub_6E0550();
        b[1] += p[0x78 / 4] + 2;
        return 0;
    }
    return sub_63023E();
}
