// from server: 100% by king_originala
// roc 2008-06 0040e320  unit: VCSecureHtmlView::?$CXTPCommandBarsSiteBase  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040e320
//
// 0040e320  53                   push ebx
// 0040e321  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0040e325  55                   push ebp
// 0040e326  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0040e32a  56                   push esi
// 0040e32b  8bf1                 mov esi, ecx
// 0040e32d  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0040e333  57                   push edi
// 0040e334  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0040e338  85c9                 test ecx, ecx
// 0040e33a  741d                 je 0x40e359
// 0040e33c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0040e340  57                   push edi
// 0040e341  53                   push ebx
// 0040e342  55                   push ebp
// 0040e343  50                   push eax
// 0040e344  e8e7692900           call 0x6a4d30
// 0040e349  85c0                 test eax, eax
// 0040e34b  740c                 je 0x40e359
// 0040e34d  5f                   pop edi
// 0040e34e  5e                   pop esi
// 0040e34f  5d                   pop ebp
// 0040e350  b801000000           mov eax, 1
// 0040e355  5b                   pop ebx
// 0040e356  c21000               ret 0x10
// 0040e359  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040e35d  57                   push edi
// 0040e35e  53                   push ebx
// 0040e35f  55                   push ebp
// 0040e360  51                   push ecx
// 0040e361  8bce                 mov ecx, esi
// 0040e363  e898242900           call 0x6a0800
// 0040e368  5f                   pop edi
// 0040e369  5e                   pop esi
// 0040e36a  5d                   pop ebp
// 0040e36b  5b                   pop ebx
// 0040e36c  c21000               ret 0x10

struct CommandBars {
    int OnCmdMsg(unsigned int id, int code, void* extra, void* handlerInfo);
};

struct View {
    char reserved[0xF8];
    CommandBars* commandBars;

    int OnCmdMsg(unsigned int id, int code, void* extra, void* handlerInfo);
    int BaseOnCmdMsg(unsigned int id, int code, void* extra, void* handlerInfo);
};

int View::OnCmdMsg(unsigned int id, int code, void* extra, void* handlerInfo)
{
    if (commandBars && commandBars->OnCmdMsg(id, code, extra, handlerInfo))
        return 1;

    return BaseOnCmdMsg(id, code, extra, handlerInfo);
}
