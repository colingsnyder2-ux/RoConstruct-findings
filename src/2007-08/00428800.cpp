// from server: 32% by colin
// roc 2007-08 00428800  unit: COleException  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00428800
//
// 00428800  53                   push ebx
// 00428801  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00428805  55                   push ebp
// 00428806  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0042880a  56                   push esi
// 0042880b  57                   push edi
// 0042880c  8d642400             lea esp, [esp]
// 00428810  3bdd                 cmp ebx, ebp
// 00428812  7426                 je 0x42883a
// 00428814  81ec40010000         sub esp, 0x140
// 0042881a  8bfc                 mov edi, esp
// 0042881c  8d7308               lea esi, [ebx + 8]
// 0042881f  b950000000           mov ecx, 0x50
// 00428824  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00428826  8d8c2468010000       lea ecx, [esp + 0x168]
// 0042882d  e87ef3ffff           call 0x427bb0
// 00428832  84c0                 test al, al
// 00428834  7504                 jne 0x42883a
// 00428836  8b1b                 mov ebx, dword ptr [ebx]
// 00428838  ebd6                 jmp 0x428810
// 0042883a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0042883e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00428842  5f                   pop edi
// 00428843  5e                   pop esi
// 00428844  5d                   pop ebp
// 00428845  895804               mov dword ptr [eax + 4], ebx
// 00428848  8908                 mov dword ptr [eax], ecx
// 0042884a  5b                   pop ebx
// 0042884b  c3                   ret 

struct COleException_Helper
{
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
    int field24;
    int field28;
    int field2C;
    int field30;
    int field34;
    int field38;
    int field3C;
    int field40;
    int field44;
    int field48;
    int field4C;
    int field50;
    int field54;
    int field58;
    int field5C;
    int field60;
    int field64;
    int field68;
    int field6C;
    int field70;
    int field74;
    int field78;
    int field7C;
    int field80;
    int field84;
    int field88;
    int field8C;
    int field90;
    int field94;
    int field98;
    int field9C;
    int fieldA0;
    int fieldA4;
    int fieldA8;
    int fieldAC;
    int fieldB0;
    int fieldB4;
    int fieldB8;
    int fieldBC;
    int fieldC0;
    int fieldC4;
    int fieldC8;
    int fieldCC;
    int fieldD0;
    int fieldD4;
    int fieldD8;
    int fieldDC;
    int fieldE0;
    int fieldE4;
    int fieldE8;
    int fieldEC;
    int fieldF0;
    int fieldF4;
    int fieldF8;
    int fieldFC;
    int field100;
    int field104;
    int field108;
    int field10C;
    int field110;
    int field114;
    int field118;
    int field11C;
    int field120;
    int field124;
    int field128;
    int field12C;
    int field130;
    int field134;
    int field138;
    int field13C;
};

struct COleException_Node
{
    COleException_Node* next;
    int pad;
    COleException_Helper data;
};

extern "C" int __fastcall sub_427BB0(COleException_Helper* self);

struct COleException
{
    COleException_Node* head;
    COleException_Node* tail;
    void find(COleException_Node** out, COleException_Node* value);
};

void COleException::find(COleException_Node** out, COleException_Node* value)
{
    COleException_Node* cur = this->head;
    while (cur != value)
    {
        COleException_Helper tmp;
        COleException_Helper* src = &cur->data;
        COleException_Helper* dst = &tmp;
        int count = 0x50;
        while (count--)
        {
            *dst = *src;
            dst++;
            src++;
        }
        if (sub_427BB0(&tmp) != 0)
            break;
        cur = cur->next;
    }
    out[1] = cur;
    out[0] = this->tail;
}
