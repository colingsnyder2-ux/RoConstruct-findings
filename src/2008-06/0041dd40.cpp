// roc 2008-06 0041dd40  unit: VDHTMLWindow::?$SignalDesc  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041dd40
//
// 0041dd40  837c240804           cmp dword ptr [esp + 8], 4
// 0041dd45  7506                 jne 0x41dd4d
// 0041dd47  b805400080           mov eax, 0x80004005
// 0041dd4c  c3                   ret 
// 0041dd4d  8b442404             mov eax, dword ptr [esp + 4]
// 0041dd51  50                   push eax
// 0041dd52  e879ffffff           call 0x41dcd0
// 0041dd57  83c404               add esp, 4
// 0041dd5a  c3                   ret 
// copied from an identical function in another client (function ?sub_41be00@ns_ROCX00001e@@YAHHH@Z)

namespace ns_ROCX00001e {
extern "C" int __cdecl sub_41bd80(int arg);

int __cdecl sub_41be00(int a, int b)
{
    if (b == 4)
        return (int)0x80004005;
    return sub_41bd80(a);
}
}
