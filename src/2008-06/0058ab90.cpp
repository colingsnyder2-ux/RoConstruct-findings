// from server: 100% by king_originala
// roc 2008-06 0058ab90  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 268 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058ab90
//
// 0058ab90  6aff                 push -1
// 0058ab92  6848167d00           push 0x7d1648
// 0058ab97  64a100000000         mov eax, dword ptr fs:[0]
// 0058ab9d  50                   push eax
// 0058ab9e  64892500000000       mov dword ptr fs:[0], esp
// 0058aba5  51                   push ecx
// 0058aba6  53                   push ebx
// 0058aba7  56                   push esi
// 0058aba8  8bf1                 mov esi, ecx
// 0058abaa  68f88d9400           push 0x948df8
// 0058abaf  8974240c             mov dword ptr [esp + 0xc], esi
// 0058abb3  e818fdffff           call 0x58a8d0
// 0058abb8  33db                 xor ebx, ebx
// 0058abba  8d8e38010000         lea ecx, [esi + 0x138]
// 0058abc0  895c2414             mov dword ptr [esp + 0x14], ebx
// 0058abc4  c706bc188300         mov dword ptr [esi], 0x8318bc
// 0058abca  c74610b0188300       mov dword ptr [esi + 0x10], 0x8318b0
// 0058abd1  c74614a8188300       mov dword ptr [esi + 0x14], 0x8318a8
// 0058abd8  c74620a0188300       mov dword ptr [esi + 0x20], 0x8318a0
// 0058abdf  c7462490188300       mov dword ptr [esi + 0x24], 0x831890
// 0058abe6  c7464480188300       mov dword ptr [esi + 0x44], 0x831880
// 0058abed  c7466470188300       mov dword ptr [esi + 0x64], 0x831870
// 0058abf4  c7868400000060188300 mov dword ptr [esi + 0x84], 0x831860
// 0058abfe  c786a400000050188300 mov dword ptr [esi + 0xa4], 0x831850
// 0058ac08  c786c400000040188300 mov dword ptr [esi + 0xc4], 0x831840
// 0058ac12  899e34010000         mov dword ptr [esi + 0x134], ebx
// 0058ac18  e8e3f50800           call 0x61a200
// 0058ac1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058ac21  899e54010000         mov dword ptr [esi + 0x154], ebx
// 0058ac27  899e58010000         mov dword ptr [esi + 0x158], ebx
// 0058ac2d  899e5c010000         mov dword ptr [esi + 0x15c], ebx
// 0058ac33  899e60010000         mov dword ptr [esi + 0x160], ebx
// 0058ac39  889e64010000         mov byte ptr [esi + 0x164], bl
// 0058ac3f  889e65010000         mov byte ptr [esi + 0x165], bl
// 0058ac45  899e6c010000         mov dword ptr [esi + 0x16c], ebx
// 0058ac4b  899e70010000         mov dword ptr [esi + 0x170], ebx
// 0058ac51  889e74010000         mov byte ptr [esi + 0x174], bl
// 0058ac57  889e78010000         mov byte ptr [esi + 0x178], bl
// 0058ac5d  899e80010000         mov dword ptr [esi + 0x180], ebx
// 0058ac63  899e84010000         mov dword ptr [esi + 0x184], ebx
// 0058ac69  889e88010000         mov byte ptr [esi + 0x188], bl
// 0058ac6f  889e8c010000         mov byte ptr [esi + 0x18c], bl
// 0058ac75  899e94010000         mov dword ptr [esi + 0x194], ebx
// 0058ac7b  899e98010000         mov dword ptr [esi + 0x198], ebx
// 0058ac81  889e9c010000         mov byte ptr [esi + 0x19c], bl
// 0058ac87  889ea0010000         mov byte ptr [esi + 0x1a0], bl
// 0058ac8d  8bc6                 mov eax, esi
// 0058ac8f  5e                   pop esi
// 0058ac90  5b                   pop ebx
// 0058ac91  64890d00000000       mov dword ptr fs:[0], ecx
// 0058ac98  83c410               add esp, 0x10
// 0058ac9b  c3                   ret 

struct Base {
    unsigned words[7];
    Base(int);
    ~Base();
};

struct Parent : Base {
    void* descriptor;
    unsigned slots[42];
    Parent(int);
};

struct Member {
    unsigned storage[7];
    Member();
};

struct S : Parent {
    unsigned padding[27];
    unsigned count;
    Member member;
    unsigned a154;
    unsigned a158;
    unsigned a15c;
    unsigned a160;
    unsigned char a164;
    unsigned char a165;
    unsigned char pad166[6];
    unsigned a16c;
    unsigned a170;
    unsigned char a174;
    unsigned char pad175[3];
    unsigned char a178;
    unsigned char pad179[7];
    unsigned a180;
    unsigned a184;
    unsigned char a188;
    unsigned char pad189[3];
    unsigned char a18c;
    unsigned char pad18d[7];
    unsigned a194;
    unsigned a198;
    unsigned char a19c;
    unsigned char pad19d[3];
    unsigned char a1a0;

    unsigned initialize();
    S();
};

__forceinline unsigned S::initialize() {
    unsigned* p = reinterpret_cast<unsigned*>(this);
    p[0] = 0x8318bc;
    p[4] = 0x8318b0;
    p[5] = 0x8318a8;
    p[8] = 0x8318a0;
    p[9] = 0x831890;
    p[17] = 0x831880;
    p[25] = 0x831870;
    p[33] = 0x831860;
    p[41] = 0x831850;
    p[49] = 0x831840;
    return 0;
}

S::S() : Parent(0x948df8), count(initialize()) {
    a154 = 0;
    a158 = 0;
    a15c = 0;
    a160 = 0;
    a164 = 0;
    a165 = 0;
    a16c = 0;
    a170 = 0;
    a174 = 0;
    a178 = 0;
    a180 = 0;
    a184 = 0;
    a188 = 0;
    a18c = 0;
    a194 = 0;
    a198 = 0;
    a19c = 0;
    a1a0 = 0;
}
