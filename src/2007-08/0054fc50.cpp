// from server: 45% by colin
// roc 2007-08 0054fc50  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054fc50
//
// 0054fc50  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054fc54  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0054fc58  50                   push eax
// 0054fc59  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0054fc5d  52                   push edx
// 0054fc5e  99                   cdq 
// 0054fc5f  52                   push edx
// 0054fc60  50                   push eax
// 0054fc61  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054fc65  50                   push eax
// 0054fc66  e825ebffff           call 0x54e790

extern "C" int __cdecl sub_0054E790(int, int, int, int, int);

int __cdecl sub_0054FC50(int a1, int a2, int a3, int a4, int a5)
{
    int v = a5;
    int w = a4;
    return sub_0054E790(a1, a2, w, v, a3);
}
