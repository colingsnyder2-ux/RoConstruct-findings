// from server: 64% by colin
// roc 2007-08 00724f13  unit: CXTIconHandle  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00724f13
//
// 00724f13  56                   push esi
// 00724f14  8b742408             mov esi, dword ptr [esp + 8]
// 00724f18  85f6                 test esi, esi
// 00724f1a  7507                 jne 0x724f23
// 00724f1c  b857000780           mov eax, 0x80070057
// 00724f21  eb4c                 jmp 0x724f6f
// 00724f23  8b06                 mov eax, dword ptr [esi]
// 00724f25  85c0                 test eax, eax
// 00724f27  7444                 je 0x724f6d
// 00724f29  83f82c               cmp eax, 0x2c
// 00724f2c  75ee                 jne 0x724f1c
// 00724f2e  57                   push edi
// 00724f2f  33ff                 xor edi, edi
// 00724f31  397e24               cmp dword ptr [esi + 0x24], edi
// 00724f34  7e21                 jle 0x724f57
// 00724f36  53                   push ebx
// 00724f37  8d5e20               lea ebx, [esi + 0x20]
// 00724f3a  57                   push edi
// 00724f3b  8bcb                 mov ecx, ebx
// 00724f3d  e869ffffff           call 0x724eab
// 00724f42  0fb700               movzx eax, word ptr [eax]
// 00724f45  ff742414             push dword ptr [esp + 0x14]
// 00724f49  50                   push eax
// 00724f4a  ff1558ec7700         call dword ptr [0x77ec58]
// 00724f50  47                   inc edi
// 00724f51  3b7e24               cmp edi, dword ptr [esi + 0x24]
// 00724f54  7ce4                 jl 0x724f3a
// 00724f56  5b                   pop ebx
// 00724f57  8d4e20               lea ecx, [esi + 0x20]
// 00724f5a  e82fffffff           call 0x724e8e
// 00724f5f  8d4604               lea eax, [esi + 4]
// 00724f62  50                   push eax
// 00724f63  ff1504d37700         call dword ptr [0x77d304]
// 00724f69  832600               and dword ptr [esi], 0
// 00724f6c  5f                   pop edi
// 00724f6d  33c0                 xor eax, eax
// 00724f6f  5e                   pop esi
// 00724f70  c20800               ret 8

struct CXTIconHandle {
    int field0;
    char pad[0x1c];
    int count;
    char pad2[4];
    int method_ab(int);
    int method_8e();
};

extern "C" int __stdcall UnregisterClassA(const char*, void*);
extern "C" void __stdcall DeleteCriticalSection(void*);

int CXTIconHandle::method_ab(int) { return 0; }
int CXTIconHandle::method_8e() { return 0; }

int f(CXTIconHandle* p, int a, int b) {
    if (p == 0) return 0x80070057;
    if (p->field0 == 0) return 0;
    if (p->field0 != 0x2c) return 0x80070057;
    for (int i = 0; i < p->count; i++) {
        int r = p->method_ab(i);
        UnregisterClassA((const char*)(unsigned short)*(unsigned short*)r, (void*)b);
    }
    p->method_8e();
    DeleteCriticalSection((void*)((char*)p + 4));
    p->field0 = 0;
    return 0;
}
