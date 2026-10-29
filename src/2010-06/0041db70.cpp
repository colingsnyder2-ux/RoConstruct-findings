// roc 2010-06 0041db70  unit: CRobloxTreeCtrl  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041db70
//
// 0041db70  8b442408             mov eax, dword ptr [esp + 8]
// 0041db74  57                   push edi
// 0041db75  8bf9                 mov edi, ecx
// 0041db77  c70000000000         mov dword ptr [eax], 0
// 0041db7d  80bfe900000000       cmp byte ptr [edi + 0xe9], 0
// 0041db84  7544                 jne 0x41dbca
// 0041db86  80bfb800000000       cmp byte ptr [edi + 0xb8], 0
// 0041db8d  753b                 jne 0x41dbca
// 0041db8f  83bf2c01000000       cmp dword ptr [edi + 0x12c], 0
// 0041db96  7432                 je 0x41dbca
// 0041db98  56                   push esi
// 0041db99  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041db9d  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0041dba1  740d                 je 0x41dbb0
// 0041dba3  6a01                 push 1
// 0041dba5  8d4e38               lea ecx, [esi + 0x38]
// 0041dba8  51                   push ecx
// 0041dba9  8bcf                 mov ecx, edi
// 0041dbab  e8a0feffff           call 0x41da50
// 0041dbb0  837e1400             cmp dword ptr [esi + 0x14], 0
// 0041dbb4  7413                 je 0x41dbc9
// 0041dbb6  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0041dbba  740d                 je 0x41dbc9
// 0041dbbc  6a00                 push 0
// 0041dbbe  83c610               add esi, 0x10
// 0041dbc1  56                   push esi
// 0041dbc2  8bcf                 mov ecx, edi
// 0041dbc4  e887feffff           call 0x41da50
// 0041dbc9  5e                   pop esi
// 0041dbca  5f                   pop edi
// 0041dbcb  c20800               ret 8
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