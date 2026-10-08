// from server: 40% by colin
// roc 2007-08 005fde20  unit: RBX::MergeBinder  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fde20
//
// 005fde20  56                   push esi
// 005fde21  8bf1                 mov esi, ecx
// 005fde23  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fde27  80b9a001000000       cmp byte ptr [ecx + 0x1a0], 0
// 005fde2e  7522                 jne 0x5fde52
// 005fde30  e8fb5df7ff           call 0x573c30
// 005fde35  84c0                 test al, al
// 005fde37  7519                 jne 0x5fde52
// 005fde39  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005fde3d  50                   push eax
// 005fde3e  8bce                 mov ecx, esi
// 005fde40  e8eb59feff           call 0x5e3830
// 005fde45  84c0                 test al, al
// 005fde47  7409                 je 0x5fde52
// 005fde49  b801000000           mov eax, 1
// 005fde4e  5e                   pop esi
// 005fde4f  c20800               ret 8
// 005fde52  33c0                 xor eax, eax
// 005fde54  5e                   pop esi
// 005fde55  c20800               ret 8

struct MergeBinder {
    bool processIDREF(int, int);
    bool processID(int, int);
};

bool MergeBinder::processIDREF(int a, int b) {
    if (*(char*)(a + 0x1a0) == 0)
        return false;
    if (processID(a, b))
        return true;
    return false;
}
