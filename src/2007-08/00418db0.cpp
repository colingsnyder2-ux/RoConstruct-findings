// from server: 46% by colin
// roc 2007-08 00418db0  unit: DHTMLWindow  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00418db0
//
// 00418db0  51                   push ecx
// 00418db1  53                   push ebx
// 00418db2  55                   push ebp
// 00418db3  56                   push esi
// 00418db4  57                   push edi
// 00418db5  83ec0c               sub esp, 0xc
// 00418db8  8964241c             mov dword ptr [esp + 0x1c], esp
// 00418dbc  8bdc                 mov ebx, esp
// 00418dbe  33ff                 xor edi, edi
// 00418dc0  57                   push edi
// 00418dc1  83ec10               sub esp, 0x10
// 00418dc4  89642430             mov dword ptr [esp + 0x30], esp
// 00418dc8  8bec                 mov ebp, esp
// 00418dca  83ec08               sub esp, 8
// 00418dcd  8bc4                 mov eax, esp
// 00418dcf  89642438             mov dword ptr [esp + 0x38], esp
// 00418dd3  51                   push ecx
// 00418dd4  50                   push eax
// 00418dd5  bed04c4100           mov esi, 0x414cd0
// 00418dda  e891480800           call 0x49d670
// 00418ddf  83c408               add esp, 8
// 00418de2  57                   push edi
// 00418de3  56                   push esi
// 00418de4  55                   push ebp
// 00418de5  e866230100           call 0x42b150
// 00418dea  83c414               add esp, 0x14
// 00418ded  8bcb                 mov ecx, ebx
// 00418def  e89cf9ffff           call 0x418790
// 00418df4  8b0dccaf8b00         mov ecx, dword ptr [0x8bafcc]
// 00418dfa  e851e9ffff           call 0x417750
// 00418dff  5f                   pop edi
// 00418e00  5e                   pop esi
// 00418e01  5d                   pop ebp
// 00418e02  5b                   pop ebx
// 00418e03  59                   pop ecx
// 00418e04  c3                   ret 

struct DHTMLWindow {
    void func_00418db0();
};

extern "C" void __cdecl func_0049d670();
extern "C" void __cdecl func_0042b150();
extern "C" void __cdecl func_00418790();
extern "C" void __cdecl func_00417750();

void DHTMLWindow::func_00418db0()
{
    char buf[12];
    char *p = buf;
    func_0049d670();
    func_0042b150();
    func_00418790();
    func_00417750();
}
