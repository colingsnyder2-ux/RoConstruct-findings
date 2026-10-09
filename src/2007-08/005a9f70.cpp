// from server: 42% by colin
// roc 2007-08 005a9f70  unit: RBX::VHumanoid::?$SignalDesc  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9f70
//
// 005a9f70  56                   push esi
// 005a9f71  8b742408             mov esi, dword ptr [esp + 8]
// 005a9f75  57                   push edi
// 005a9f76  6a00                 push 0
// 005a9f78  56                   push esi
// 005a9f79  8bf9                 mov edi, ecx
// 005a9f7b  e8e0faffff           call 0x5a9a60
// 005a9f80  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 005a9f83  56                   push esi
// 005a9f84  e877550500           call 0x5ff500
// 005a9f89  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 005a9f8c  56                   push esi
// 005a9f8d  e8de8f0500           call 0x602f70
// 005a9f92  8b5758               mov edx, dword ptr [edi + 0x58]
// 005a9f95  8b4618               mov eax, dword ptr [esi + 0x18]
// 005a9f98  8d4f58               lea ecx, [edi + 0x58]
// 005a9f9b  8b7904               mov edi, dword ptr [ecx + 4]
// 005a9f9e  8b7cbafc             mov edi, dword ptr [edx + edi*4 - 4]
// 005a9fa2  893c82               mov dword ptr [edx + eax*4], edi
// 005a9fa5  894718               mov dword ptr [edi + 0x18], eax
// 005a9fa8  8b4104               mov eax, dword ptr [ecx + 4]
// 005a9fab  6a00                 push 0
// 005a9fad  83e801               sub eax, 1
// 005a9fb0  50                   push eax
// 005a9fb1  e8baa3fcff           call 0x574370
// 005a9fb6  5f                   pop edi
// 005a9fb7  c74618ffffffff       mov dword ptr [esi + 0x18], 0xffffffff
// 005a9fbe  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 005a9fc5  5e                   pop esi
// 005a9fc6  c20400               ret 4

struct SignalDesc {
    void remove(int);
    void f(int);
};

struct S {
    char pad[0x30];
    int field30;
    int field34;
    char pad2[0x20];
    int field58;
    int field5c;
    void method(int);
};

void SignalDesc::remove(int) {}
void SignalDesc::f(int) {}

void S::method(int a) {
    SignalDesc *sd = (SignalDesc *)this;
    sd->remove(a);
    ((SignalDesc *)field30)->f(a);
    ((SignalDesc *)field34)->f(a);
    int *arr = &field58;
    int idx = *(int *)(a + 0x18);
    int last = arr[1];
    int val = arr[last - 1];
    arr[idx] = val;
    *(int *)(val + 0x18) = idx;
    int n = arr[1] - 1;
    extern void func574370(int, int);
    func574370(n, 0);
    *(int *)(a + 0x18) = -1;
    *(int *)(a + 0x1c) = 0;
}
