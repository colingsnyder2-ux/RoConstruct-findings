// from server: 69% by colin
// roc 2007-08 006a2c50  unit: CXTPHookManagerHookAble  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a2c50
//
// 006a2c50  56                   push esi
// 006a2c51  8b711c               mov esi, dword ptr [ecx + 0x1c]
// 006a2c54  85f6                 test esi, esi
// 006a2c56  57                   push edi
// 006a2c57  7438                 je 0x6a2c91
// 006a2c59  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a2c5d  8d4900               lea ecx, [ecx]
// 006a2c60  8d54240c             lea edx, [esp + 0xc]
// 006a2c64  52                   push edx
// 006a2c65  8d542418             lea edx, [esp + 0x18]
// 006a2c69  52                   push edx
// 006a2c6a  8bc6                 mov eax, esi
// 006a2c6c  8b4808               mov ecx, dword ptr [eax + 8]
// 006a2c6f  8b7604               mov esi, dword ptr [esi + 4]
// 006a2c72  8d542418             lea edx, [esp + 0x18]
// 006a2c76  52                   push edx
// 006a2c77  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006a2c7f  8b01                 mov eax, dword ptr [ecx]
// 006a2c81  8b4004               mov eax, dword ptr [eax + 4]
// 006a2c84  57                   push edi
// 006a2c85  6a00                 push 0
// 006a2c87  ffd0                 call eax
// 006a2c89  85c0                 test eax, eax
// 006a2c8b  750e                 jne 0x6a2c9b
// 006a2c8d  85f6                 test esi, esi
// 006a2c8f  75cf                 jne 0x6a2c60
// 006a2c91  5f                   pop edi
// 006a2c92  b801000000           mov eax, 1
// 006a2c97  5e                   pop esi
// 006a2c98  c20c00               ret 0xc
// 006a2c9b  33c9                 xor ecx, ecx
// 006a2c9d  83f802               cmp eax, 2
// 006a2ca0  0f95c1               setne cl
// 006a2ca3  5f                   pop edi
// 006a2ca4  5e                   pop esi
// 006a2ca5  8bc1                 mov eax, ecx
// 006a2ca7  c20c00               ret 0xc

struct CXTPHookManagerHookAble {
    int OnHookMessage(int, int, int);
};

struct HookNode {
    HookNode* next;
    int unknown;
    void* obj;
};

int CXTPHookManagerHookAble::OnHookMessage(int a, int b, int c)
{
    HookNode* node = *(HookNode**)((char*)this + 0x1c);
    if (node == 0)
        return 1;
    int result;
    do {
        HookNode* cur = node;
        node = node->next;
        int zero = 0;
        int (*fn)(void*, int, int, int*, int*) =
            *(int (**)(void*, int, int, int*, int*))(
                *(int*)(*(int*)((char*)cur->obj + 8)));
        result = fn(*(void**)((char*)cur->obj + 8), 0, a, &zero, &b);
        if (result != 0)
            break;
    } while (node != 0);
    if (result == 0)
        return 1;
    return result != 2;
}
