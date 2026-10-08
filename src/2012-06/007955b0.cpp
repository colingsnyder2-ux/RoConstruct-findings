// roc 2012-06 007955b0  unit: RBX::HUMAN::VHumanoidState::?$sp_counted_impl_p  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007955b0
//
// 007955b0  51                   push ecx
// 007955b1  6a28                 push 0x28
// 007955b3  c744240400000000     mov dword ptr [esp + 4], 0
// 007955bb  e85acb1e00           call 0x98211a
// 007955c0  83c404               add esp, 4
// 007955c3  85c0                 test eax, eax
// 007955c5  7432                 je 0x7955f9
// 007955c7  c700c038bb00         mov dword ptr [eax], 0xbb38c0
// 007955cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007955d1  894808               mov dword ptr [eax + 8], ecx
// 007955d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007955d8  89500c               mov dword ptr [eax + 0xc], edx
// 007955db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007955df  894810               mov dword ptr [eax + 0x10], ecx
// 007955e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007955e6  895018               mov dword ptr [eax + 0x18], edx
// 007955e9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007955ed  89481c               mov dword ptr [eax + 0x1c], ecx
// 007955f0  8b542420             mov edx, dword ptr [esp + 0x20]
// 007955f4  895020               mov dword ptr [eax + 0x20], edx
// 007955f7  eb02                 jmp 0x7955fb
// 007955f9  33c0                 xor eax, eax
// 007955fb  56                   push esi
// 007955fc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00795600  6a00                 push 0
// 00795602  8906                 mov dword ptr [esi], eax
// 00795604  e80bcb1e00           call 0x982114
// 00795609  83c404               add esp, 4
// 0079560c  8bc6                 mov eax, esi
// 0079560e  5e                   pop esi
// 0079560f  59                   pop ecx
// 00795610  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
