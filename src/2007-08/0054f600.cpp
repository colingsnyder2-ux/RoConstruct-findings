// from server: 19% by colin
// roc 2007-08 0054f600  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f600
//
// 0054f600  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054f604  8b542410             mov edx, dword ptr [esp + 0x10]
// 0054f608  50                   push eax
// 0054f609  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054f60d  52                   push edx
// 0054f60e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0054f612  50                   push eax
// 0054f613  8b442424             mov eax, dword ptr [esp + 0x24]
// 0054f617  52                   push edx
// 0054f618  50                   push eax
// 0054f619  51                   push ecx
// 0054f61a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054f61e  51                   push ecx
// 0054f61f  e8dcfeffff           call 0x54f500

extern "C" int __cdecl sub_0054F500(int, int, int, int, int, int, int);

int __cdecl sub_0054F600(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    return sub_0054F500(a1, a2, a3, a4, a5, a6, a7);
}
