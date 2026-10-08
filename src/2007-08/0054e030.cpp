// from server: 44% by colin
// roc 2007-08 0054e030  unit: std::D::V?$allocator::U?$basic_zlib_decompressor::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e030
//
// 0054e030  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054e034  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0054e038  50                   push eax
// 0054e039  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0054e03d  52                   push edx
// 0054e03e  99                   cdq 
// 0054e03f  52                   push edx
// 0054e040  50                   push eax
// 0054e041  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054e045  50                   push eax
// 0054e046  e835feffff           call 0x54de80

extern "C" int __cdecl sub_54de80(int, int, int, int, int);

int func_0054e030(int a, int b, int c, int d, int e)
{
    int x = d;
    int y = c;
    int z = x / 2;
    return sub_54de80(a, b, y, z, x);
}
