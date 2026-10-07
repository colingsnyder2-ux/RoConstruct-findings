// roc 2012-06 005ba600  unit: RakNet::PluginInterface2  size: 295 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005ba600
//
// 005ba600  8bc1                 mov eax, ecx
// 005ba602  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ba606  8b9198000000         mov edx, dword ptr [ecx + 0x98]
// 005ba60c  019098000000         add dword ptr [eax + 0x98], edx
// 005ba612  dd81a8000000         fld qword ptr [ecx + 0xa8]
// 005ba618  dc80a8000000         fadd qword ptr [eax + 0xa8]
// 005ba61e  dd98a8000000         fstp qword ptr [eax + 0xa8]
// 005ba624  8b919c000000         mov edx, dword ptr [ecx + 0x9c]
// 005ba62a  01909c000000         add dword ptr [eax + 0x9c], edx
// 005ba630  dd81b0000000         fld qword ptr [ecx + 0xb0]
// 005ba636  dc80b0000000         fadd qword ptr [eax + 0xb0]
// 005ba63c  dd98b0000000         fstp qword ptr [eax + 0xb0]
// 005ba642  8b91a0000000         mov edx, dword ptr [ecx + 0xa0]
// 005ba648  0190a0000000         add dword ptr [eax + 0xa0], edx
// 005ba64e  dd81b8000000         fld qword ptr [ecx + 0xb8]
// 005ba654  dc80b8000000         fadd qword ptr [eax + 0xb8]
// 005ba65a  dd98b8000000         fstp qword ptr [eax + 0xb8]
// 005ba660  8b91a4000000         mov edx, dword ptr [ecx + 0xa4]
// 005ba666  0190a4000000         add dword ptr [eax + 0xa4], edx
// 005ba66c  dd81c0000000         fld qword ptr [ecx + 0xc0]
// 005ba672  dc80c0000000         fadd qword ptr [eax + 0xc0]
// 005ba678  dd98c0000000         fstp qword ptr [eax + 0xc0]
// 005ba67e  8b11                 mov edx, dword ptr [ecx]
// 005ba680  0110                 add dword ptr [eax], edx
// 005ba682  8b5104               mov edx, dword ptr [ecx + 4]
// 005ba685  115004               adc dword ptr [eax + 4], edx
// 005ba688  8b5138               mov edx, dword ptr [ecx + 0x38]
// 005ba68b  015038               add dword ptr [eax + 0x38], edx
// 005ba68e  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 005ba691  11503c               adc dword ptr [eax + 0x3c], edx
// 005ba694  8b5108               mov edx, dword ptr [ecx + 8]
// 005ba697  015008               add dword ptr [eax + 8], edx
// 005ba69a  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005ba69d  11500c               adc dword ptr [eax + 0xc], edx
// 005ba6a0  8b5140               mov edx, dword ptr [ecx + 0x40]
// 005ba6a3  015040               add dword ptr [eax + 0x40], edx
// 005ba6a6  8b5144               mov edx, dword ptr [ecx + 0x44]
// 005ba6a9  115044               adc dword ptr [eax + 0x44], edx
// 005ba6ac  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005ba6af  015010               add dword ptr [eax + 0x10], edx
// 005ba6b2  8b5114               mov edx, dword ptr [ecx + 0x14]
// 005ba6b5  115014               adc dword ptr [eax + 0x14], edx
// 005ba6b8  8b5148               mov edx, dword ptr [ecx + 0x48]
// 005ba6bb  015048               add dword ptr [eax + 0x48], edx
// 005ba6be  8b514c               mov edx, dword ptr [ecx + 0x4c]
// 005ba6c1  11504c               adc dword ptr [eax + 0x4c], edx
// 005ba6c4  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005ba6c7  015018               add dword ptr [eax + 0x18], edx
// 005ba6ca  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 005ba6cd  11501c               adc dword ptr [eax + 0x1c], edx
// 005ba6d0  8b5150               mov edx, dword ptr [ecx + 0x50]
// 005ba6d3  015050               add dword ptr [eax + 0x50], edx
// 005ba6d6  8b5154               mov edx, dword ptr [ecx + 0x54]
// 005ba6d9  115054               adc dword ptr [eax + 0x54], edx
// 005ba6dc  8b5120               mov edx, dword ptr [ecx + 0x20]
// 005ba6df  015020               add dword ptr [eax + 0x20], edx
// 005ba6e2  8b5124               mov edx, dword ptr [ecx + 0x24]
// 005ba6e5  115024               adc dword ptr [eax + 0x24], edx
// 005ba6e8  8b5158               mov edx, dword ptr [ecx + 0x58]
// 005ba6eb  015058               add dword ptr [eax + 0x58], edx
// 005ba6ee  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 005ba6f1  11505c               adc dword ptr [eax + 0x5c], edx
// 005ba6f4  8b5128               mov edx, dword ptr [ecx + 0x28]
// 005ba6f7  015028               add dword ptr [eax + 0x28], edx
// 005ba6fa  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 005ba6fd  11502c               adc dword ptr [eax + 0x2c], edx
// 005ba700  8b5160               mov edx, dword ptr [ecx + 0x60]
// 005ba703  015060               add dword ptr [eax + 0x60], edx
// 005ba706  8b5164               mov edx, dword ptr [ecx + 0x64]
// 005ba709  115064               adc dword ptr [eax + 0x64], edx
// 005ba70c  8b5130               mov edx, dword ptr [ecx + 0x30]
// 005ba70f  015030               add dword ptr [eax + 0x30], edx
// 005ba712  8b5134               mov edx, dword ptr [ecx + 0x34]
// 005ba715  115034               adc dword ptr [eax + 0x34], edx
// 005ba718  8b5168               mov edx, dword ptr [ecx + 0x68]
// 005ba71b  015068               add dword ptr [eax + 0x68], edx
// 005ba71e  8b496c               mov ecx, dword ptr [ecx + 0x6c]
// 005ba721  11486c               adc dword ptr [eax + 0x6c], ecx
// 005ba724  c20400               ret 4
// library rbx2016-raknet/RakPeer.cpp (function ??YRakNetStatistics@RakNet@@QAEAAU01@ABU01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
