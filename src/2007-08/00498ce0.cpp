// from server: 57% by colin
// roc 2007-08 00498ce0  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00498ce0
//
// 00498ce0  e8397d1900           call 0x630a1e
// 00498ce5  83c46c               add esp, 0x6c
// 00498ce8  c3                   ret 

extern "C" void __cdecl sub_00630A1E();

void sub_00498CE0()
{
    sub_00630A1E();
}
