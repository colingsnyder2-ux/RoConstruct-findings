// from server: 100% by king_originala
// roc 2008-06 00504b60  unit: RBX::Render::RenderScene  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00504b60
//
// 00504b60  53                   push ebx
// 00504b61  56                   push esi
// 00504b62  8bf1                 mov esi, ecx
// 00504b64  57                   push edi
// 00504b65  8dbee8010000         lea edi, [esi + 0x1e8]
// 00504b6b  8bcf                 mov ecx, edi
// 00504b6d  e87ed10000           call 0x511cf0
// 00504b72  8bce                 mov ecx, esi
// 00504b74  e887ffffff           call 0x504b00
// 00504b79  8b442414             mov eax, dword ptr [esp + 0x14]
// 00504b7d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00504b81  50                   push eax
// 00504b82  51                   push ecx
// 00504b83  8bce                 mov ecx, esi
// 00504b85  e806f7ffff           call 0x504290
// 00504b8a  8bce                 mov ecx, esi
// 00504b8c  e8afe9ffff           call 0x503540
// 00504b91  8d9ee0000000         lea ebx, [esi + 0xe0]
// 00504b97  8bcb                 mov ecx, ebx
// 00504b99  e852d10000           call 0x511cf0
// 00504b9e  8d9674020000         lea edx, [esi + 0x274]
// 00504ba4  52                   push edx
// 00504ba5  e8b60c0000           call 0x505860
// 00504baa  8d8680020000         lea eax, [esi + 0x280]
// 00504bb0  50                   push eax
// 00504bb1  e8da0c0000           call 0x505890
// 00504bb6  8d8e8c020000         lea ecx, [esi + 0x28c]
// 00504bbc  51                   push ecx
// 00504bbd  e8fe0c0000           call 0x5058c0
// 00504bc2  83c40c               add esp, 0xc
// 00504bc5  8bcb                 mov ecx, ebx
// 00504bc7  e824d20000           call 0x511df0
// 00504bcc  8bcf                 mov ecx, edi
// 00504bce  e81dd20000           call 0x511df0
// 00504bd3  8b9678020000         mov edx, dword ptr [esi + 0x278]
// 00504bd9  5f                   pop edi
// 00504bda  899650020000         mov dword ptr [esi + 0x250], edx
// 00504be0  5e                   pop esi
// 00504be1  5b                   pop ebx
// 00504be2  c20800               ret 8

struct Lock {
    void enter();
    void leave();
};

struct Array {
    void* data;
    int count;
    int capacity;
};

void __cdecl process1(Array*);
void __cdecl process2(Array*);
void __cdecl process3(Array*);

struct S {
    char pad0[0xe0];
    Lock lock1;
    char pad1[0x107];
    Lock lock2;
    char pad2[0x67];
    int count;
    char pad3[0x20];
    Array array1;
    Array array2;
    Array array3;

    void prepare();
    void update(int, int);
    void finish();
    void f(int, int);
};

void S::f(int a, int b) {
    lock2.enter();
    prepare();
    update(a, b);
    finish();
    lock1.enter();
    process1(&array1);
    process2(&array2);
    process3(&array3);
    lock1.leave();
    lock2.leave();
    count = array1.count;
}
