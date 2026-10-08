// from server: 63% by colin
// roc 2007-08 0054d270  unit: UString_sink::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054d270
//
// 0054d270  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054d274  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0054d278  50                   push eax
// 0054d279  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0054d27d  52                   push edx
// 0054d27e  99                   cdq 
// 0054d27f  52                   push edx
// 0054d280  50                   push eax
// 0054d281  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054d285  50                   push eax
// 0054d286  e825f2ffff           call 0x54c4b0

extern "C" int __cdecl sub_54C4B0(int, int, int, int, int);

struct UString_sink_stream_buffer
{
    int write(int a, int b, int c, int d);
};

int UString_sink_stream_buffer::write(int a, int b, int c, int d)
{
    return sub_54C4B0(a, b, c, d, 0);
}
