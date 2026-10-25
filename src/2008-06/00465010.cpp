// from server: 100% by colin
// roc 2008-06 00465010  unit: RBX::VRunService::?$MarshaledListener  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00465010
//
// 00465010  6aff                 push -1
// 00465012  68e6327c00           push 0x7c32e6
// 00465017  64a100000000         mov eax, dword ptr fs:[0]
// 0046501d  50                   push eax
// 0046501e  64892500000000       mov dword ptr fs:[0], esp
// 00465025  51                   push ecx
// 00465026  53                   push ebx
// 00465027  55                   push ebp
// 00465028  56                   push esi
// 00465029  8bf1                 mov esi, ecx
// 0046502b  57                   push edi
// 0046502c  89742410             mov dword ptr [esp + 0x10], esi
// 00465030  e8cbceffff           call 0x461f00
// 00465035  8dbef0000000         lea edi, [esi + 0xf0]
// 0046503b  33db                 xor ebx, ebx
// 0046503d  8bcf                 mov ecx, edi
// 0046503f  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00465043  e828f9ffff           call 0x464970
// 00465048  8dae14010000         lea ebp, [esi + 0x114]
// 0046504e  8bcd                 mov ecx, ebp
// 00465050  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00465055  e8e6f9ffff           call 0x464a40
// 0046505a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0046505e  c706dcb38100         mov dword ptr [esi], 0x81b3dc
// 00465064  c786ec000000d0b38100 mov dword ptr [esi + 0xec], 0x81b3d0
// 0046506e  c707bcb38100         mov dword ptr [edi], 0x81b3bc
// 00465074  c74500a8b38100       mov dword ptr [ebp], 0x81b3a8
// 0046507b  899e38010000         mov dword ptr [esi + 0x138], ebx
// 00465081  899e3c010000         mov dword ptr [esi + 0x13c], ebx
// 00465087  899e40010000         mov dword ptr [esi + 0x140], ebx
// 0046508d  899e44010000         mov dword ptr [esi + 0x144], ebx
// 00465093  899e48010000         mov dword ptr [esi + 0x148], ebx
// 00465099  899e4c010000         mov dword ptr [esi + 0x14c], ebx
// 0046509f  899e50010000         mov dword ptr [esi + 0x150], ebx
// 004650a5  889e54010000         mov byte ptr [esi + 0x154], bl
// 004650ab  889e55010000         mov byte ptr [esi + 0x155], bl
// 004650b1  889e56010000         mov byte ptr [esi + 0x156], bl
// 004650b7  5f                   pop edi
// 004650b8  899e5c010000         mov dword ptr [esi + 0x15c], ebx
// 004650be  c7865801000028b28100 mov dword ptr [esi + 0x158], 0x81b228
// 004650c8  8bc6                 mov eax, esi
// 004650ca  5e                   pop esi
// 004650cb  5d                   pop ebp
// 004650cc  5b                   pop ebx
// 004650cd  64890d00000000       mov dword ptr fs:[0], ecx
// 004650d4  83c410               add esp, 0x10
// 004650d7  c3                   ret 

extern unsigned long table0;
extern unsigned long tableEC;
extern unsigned long tableF0;
extern unsigned long table114;
extern unsigned long table158;

struct Base
{
    unsigned long table;
    char padding[0xe8];
    unsigned long secondaryTable;

    Base();
    ~Base();
};

struct MemberA
{
    volatile unsigned long table;
    char padding[0x20];

    MemberA();
    ~MemberA();
};

struct MemberB
{
    volatile unsigned long table;
    char padding[0x20];

    MemberB();
    ~MemberB();
};

struct S : Base
{
    MemberA a;
    MemberB b;
    volatile unsigned long field138;
    volatile unsigned long field13c;
    volatile unsigned long field140;
    volatile unsigned long field144;
    volatile unsigned long field148;
    volatile unsigned long field14c;
    volatile unsigned long field150;
    volatile unsigned char field154;
    volatile unsigned char field155;
    volatile unsigned char field156;
    unsigned char padding157;
    volatile unsigned long field158;
    unsigned long field15c;

    S();
};

S::S()
{
    table = (unsigned long)&table0;
    secondaryTable = (unsigned long)&tableEC;
    a.table = (unsigned long)&tableF0;
    b.table = (unsigned long)&table114;
    field138 = 0;
    field13c = 0;
    field140 = 0;
    field144 = 0;
    field148 = 0;
    field14c = 0;
    field150 = 0;
    field154 = 0;
    field155 = 0;
    field156 = 0;
    field158 = (unsigned long)&table158;
    field15c = 0;
}
