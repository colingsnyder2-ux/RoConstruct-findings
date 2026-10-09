// roc 2011-06 008260c0  unit: CXTPImageManager  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008260c0
//
// 008260c0  8b442404             mov eax, dword ptr [esp + 4]
// 008260c4  83f801               cmp eax, 1
// 008260c7  7509                 jne 0x8260d2
// 008260c9  89442404             mov dword ptr [esp + 4], eax
// 008260cd  e95effffff           jmp 0x826030
// 008260d2  83f802               cmp eax, 2
// 008260d5  7508                 jne 0x8260df
// 008260d7  e8a4acffff           call 0x820d80
// 008260dc  c20400               ret 4
// 008260df  83f803               cmp eax, 3
// 008260e2  7508                 jne 0x8260ec
// 008260e4  e8b7acffff           call 0x820da0
// 008260e9  c20400               ret 4
// 008260ec  83f804               cmp eax, 4
// 008260ef  7508                 jne 0x8260f9
// 008260f1  e8caacffff           call 0x820dc0
// 008260f6  c20400               ret 4
// 008260f9  e82296ffff           call 0x81f720
// 008260fe  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPImageManagerIconSet@ns_ROCX000036@ns_ROCX00002a@@QAEXH@Z)

namespace ns_ROCX000036 {
extern void G1_func_0062e440();
void fn_ROCX000036()
{
    G1_func_0062e440();
}
}
