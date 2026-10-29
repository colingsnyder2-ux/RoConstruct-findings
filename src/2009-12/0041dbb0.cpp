// roc 2009-12 0041dbb0  unit: CRobloxTreeCtrl  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041dbb0
//
// 0041dbb0  8b442408             mov eax, dword ptr [esp + 8]
// 0041dbb4  57                   push edi
// 0041dbb5  8bf9                 mov edi, ecx
// 0041dbb7  c70000000000         mov dword ptr [eax], 0
// 0041dbbd  80bfe900000000       cmp byte ptr [edi + 0xe9], 0
// 0041dbc4  7544                 jne 0x41dc0a
// 0041dbc6  80bfb800000000       cmp byte ptr [edi + 0xb8], 0
// 0041dbcd  753b                 jne 0x41dc0a
// 0041dbcf  83bf2c01000000       cmp dword ptr [edi + 0x12c], 0
// 0041dbd6  7432                 je 0x41dc0a
// 0041dbd8  56                   push esi
// 0041dbd9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041dbdd  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0041dbe1  740d                 je 0x41dbf0
// 0041dbe3  6a01                 push 1
// 0041dbe5  8d4e38               lea ecx, [esi + 0x38]
// 0041dbe8  51                   push ecx
// 0041dbe9  8bcf                 mov ecx, edi
// 0041dbeb  e8a0feffff           call 0x41da90
// 0041dbf0  837e1400             cmp dword ptr [esi + 0x14], 0
// 0041dbf4  7413                 je 0x41dc09
// 0041dbf6  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0041dbfa  740d                 je 0x41dc09
// 0041dbfc  6a00                 push 0
// 0041dbfe  83c610               add esi, 0x10
// 0041dc01  56                   push esi
// 0041dc02  8bcf                 mov ecx, edi
// 0041dc04  e887feffff           call 0x41da90
// 0041dc09  5e                   pop esi
// 0041dc0a  5f                   pop edi
// 0041dc0b  c20800               ret 8
// copied from an identical function in another client (function ?fn_ROCX000004_0041d540@CRobloxTreeCtrl@ns_ROCX000004@@QAEXPAUEvent@2@PAH@Z)

namespace ns_ROCX000004 {
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

    void fn_ROCX000004_0041d420(void *, int);
    void fn_ROCX000004_0041d540(Event *, int *);
};

void CRobloxTreeCtrl::fn_ROCX000004_0041d540(Event *event, int *result)
{
    *result = 0;
    if (fielde9 == 0 && fieldb8 == 0 && field12c != 0)
    {
        if (event->field3c != 0)
            fn_ROCX000004_0041d420(&event->field38, 1);

        if (event->field14 != 0 && event->field0c != 0)
            fn_ROCX000004_0041d420(&event->field10, 0);
    }
}
}
