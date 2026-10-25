// from server: 100% by king_originala
// roc 2008-06 0062dee0  unit: RBX::VGeometryService::?$FactoryProduct  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062dee0
//
// 0062dee0  6aff                 push -1
// 0062dee2  68789b7d00           push 0x7d9b78
// 0062dee7  64a100000000         mov eax, dword ptr fs:[0]
// 0062deed  50                   push eax
// 0062deee  64892500000000       mov dword ptr fs:[0], esp
// 0062def5  51                   push ecx
// 0062def6  56                   push esi
// 0062def7  6830c59500           push 0x95c530
// 0062defc  8bf1                 mov esi, ecx
// 0062defe  e8bdfeffff           call 0x62ddc0
// 0062df03  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062df07  33c0                 xor eax, eax
// 0062df09  898630010000         mov dword ptr [esi + 0x130], eax
// 0062df0f  c706846a8400         mov dword ptr [esi], 0x846a84
// 0062df15  c74610786a8400       mov dword ptr [esi + 0x10], 0x846a78
// 0062df1c  c74614706a8400       mov dword ptr [esi + 0x14], 0x846a70
// 0062df23  c74620686a8400       mov dword ptr [esi + 0x20], 0x846a68
// 0062df2a  c74624586a8400       mov dword ptr [esi + 0x24], 0x846a58
// 0062df31  c74644486a8400       mov dword ptr [esi + 0x44], 0x846a48
// 0062df38  c74664386a8400       mov dword ptr [esi + 0x64], 0x846a38
// 0062df3f  c78684000000286a8400 mov dword ptr [esi + 0x84], 0x846a28
// 0062df49  c786a4000000186a8400 mov dword ptr [esi + 0xa4], 0x846a18
// 0062df53  c786c4000000086a8400 mov dword ptr [esi + 0xc4], 0x846a08
// 0062df5d  898638010000         mov dword ptr [esi + 0x138], eax
// 0062df63  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0062df69  898634010000         mov dword ptr [esi + 0x134], eax
// 0062df6f  8bc6                 mov eax, esi
// 0062df71  5e                   pop esi
// 0062df72  64890d00000000       mov dword ptr fs:[0], ecx
// 0062df79  83c410               add esp, 0x10
// 0062df7c  c3                   ret 

extern const unsigned long table0[];
extern const unsigned long table10[];
extern const unsigned long table14[];
extern const unsigned long table20[];
extern const unsigned long table24[];
extern const unsigned long table44[];
extern const unsigned long table64[];
extern const unsigned long table84[];
extern const unsigned long tableA4[];
extern const unsigned long tableC4[];

struct Base
{
    const unsigned long* volatile data[76];

    Base(const char*);
    ~Base();
};

struct Zero
{
    unsigned long value;

    Zero();
    ~Zero();
};

Zero::Zero() : value(0)
{
    if (value)
        this->~Zero();
}

struct S : Base
{
    Zero first;
    volatile unsigned long tail[3];

    S();
};

S::S() : Base(reinterpret_cast<const char*>(0x95c530)), first()
{
    data[0] = table0;
    data[4] = table10;
    data[5] = table14;
    data[8] = table20;
    data[9] = table24;
    data[17] = table44;
    data[25] = table64;
    data[33] = table84;
    data[41] = tableA4;
    data[49] = tableC4;
    tail[1] = 0;
    tail[2] = 0;
    tail[0] = 0;
}
