// from server: 100% by ivan-grebe
// roc 2009-06 0041d540  unit: CRobloxTreeCtrl  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041d540
//
// 0041d540  8b442408             mov eax, dword ptr [esp + 8]
// 0041d544  57                   push edi
// 0041d545  8bf9                 mov edi, ecx
// 0041d547  c70000000000         mov dword ptr [eax], 0
// 0041d54d  80bfe900000000       cmp byte ptr [edi + 0xe9], 0
// 0041d554  7544                 jne 0x41d59a
// 0041d556  80bfb800000000       cmp byte ptr [edi + 0xb8], 0
// 0041d55d  753b                 jne 0x41d59a
// 0041d55f  83bf2c01000000       cmp dword ptr [edi + 0x12c], 0
// 0041d566  7432                 je 0x41d59a
// 0041d568  56                   push esi
// 0041d569  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041d56d  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0041d571  740d                 je 0x41d580
// 0041d573  6a01                 push 1
// 0041d575  8d4e38               lea ecx, [esi + 0x38]
// 0041d578  51                   push ecx
// 0041d579  8bcf                 mov ecx, edi
// 0041d57b  e8a0feffff           call 0x41d420
// 0041d580  837e1400             cmp dword ptr [esi + 0x14], 0
// 0041d584  7413                 je 0x41d599
// 0041d586  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0041d58a  740d                 je 0x41d599
// 0041d58c  6a00                 push 0
// 0041d58e  83c610               add esi, 0x10
// 0041d591  56                   push esi
// 0041d592  8bcf                 mov ecx, edi
// 0041d594  e887feffff           call 0x41d420
// 0041d599  5e                   pop esi
// 0041d59a  5f                   pop edi
// 0041d59b  c20800               ret 8

struct Event
{
    char padding0[0x0c];
    int field0c;
    int field10;
    int field14;
    char padding1[0x20];
    int field38;
    int field3c;
};

struct CRobloxTreeCtrl
{
    char padding0[0xb8];
    unsigned char fieldb8;
    char padding1[0x30];
    unsigned char fielde9;
    char padding2[0x42];
    int field12c;

    void func_0041d420(void *, int);
    void func_0041d540(Event *, int *);
};

void CRobloxTreeCtrl::func_0041d540(Event *event, int *result)
{
    *result = 0;
    if (fielde9 == 0 && fieldb8 == 0 && field12c != 0)
    {
        if (event->field3c != 0)
            func_0041d420(&event->field38, 1);

        if (event->field14 != 0 && event->field0c != 0)
            func_0041d420(&event->field10, 0);
    }
}
