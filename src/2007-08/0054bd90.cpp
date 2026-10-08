// from server: 17% by colin
// roc 2007-08 0054bd90  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054bd90
//
// 0054bd90  51                   push ecx
// 0054bd91  8b0424               mov eax, dword ptr [esp]
// 0054bd94  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0054bd98  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0054bd9c  50                   push eax
// 0054bd9d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054bda1  51                   push ecx
// 0054bda2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054bda6  52                   push edx
// 0054bda7  8b542418             mov edx, dword ptr [esp + 0x18]
// 0054bdab  50                   push eax
// 0054bdac  8b442418             mov eax, dword ptr [esp + 0x18]
// 0054bdb0  51                   push ecx
// 0054bdb1  52                   push edx
// 0054bdb2  50                   push eax
// 0054bdb3  e8d8360000           call 0x54f490

extern void __stdcall func_0054f490(int, int, int, int, int, int, int, int);

void __stdcall func_0054bd90(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    func_0054f490(a1, a2, a3, a4, a5, a6, a7, a8);
}
