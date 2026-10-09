// roc 2010-06 007c4500  unit: CXTPImageManager  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c4500
//
// 007c4500  8b442404             mov eax, dword ptr [esp + 4]
// 007c4504  83f801               cmp eax, 1
// 007c4507  7509                 jne 0x7c4512
// 007c4509  89442404             mov dword ptr [esp + 4], eax
// 007c450d  e92efdffff           jmp 0x7c4240
// 007c4512  83f802               cmp eax, 2
// 007c4515  7508                 jne 0x7c451f
// 007c4517  e884a7ffff           call 0x7beca0
// 007c451c  c20400               ret 4
// 007c451f  83f803               cmp eax, 3
// 007c4522  7508                 jne 0x7c452c
// 007c4524  e897a7ffff           call 0x7becc0
// 007c4529  c20400               ret 4
// 007c452c  83f804               cmp eax, 4
// 007c452f  7508                 jne 0x7c4539
// 007c4531  e8aaa7ffff           call 0x7bece0
// 007c4536  c20400               ret 4
// 007c4539  e8a28dffff           call 0x7bd2e0
// 007c453e  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPImageManagerIconSet@ns_ROCX000032@ns_ROCX00005f@@QAEXH@Z)

namespace ns_ROCX000032 {
extern void G1_func_00722a10();
void fn_ROCX000032()
{
    G1_func_00722a10();
}
}
