// roc 2012-06 0059ae80  unit: VAuthoringSettings::?$FactoryProduct  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059ae80
//
// 0059ae80  8bc1                 mov eax, ecx
// 0059ae82  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0059ae86  8b11                 mov edx, dword ptr [ecx]
// 0059ae88  8910                 mov dword ptr [eax], edx
// 0059ae8a  8b5104               mov edx, dword ptr [ecx + 4]
// 0059ae8d  895004               mov dword ptr [eax + 4], edx
// 0059ae90  8b5108               mov edx, dword ptr [ecx + 8]
// 0059ae93  895008               mov dword ptr [eax + 8], edx
// 0059ae96  0fb6510c             movzx edx, byte ptr [ecx + 0xc]
// 0059ae9a  88500c               mov byte ptr [eax + 0xc], dl
// 0059ae9d  668b510e             mov dx, word ptr [ecx + 0xe]
// 0059aea1  6689500e             mov word ptr [eax + 0xe], dx
// 0059aea5  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0059aea8  895010               mov dword ptr [eax + 0x10], edx
// 0059aeab  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0059aeae  895014               mov dword ptr [eax + 0x14], edx
// 0059aeb1  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0059aeb4  895018               mov dword ptr [eax + 0x18], edx
// 0059aeb7  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0059aeba  89501c               mov dword ptr [eax + 0x1c], edx
// 0059aebd  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0059aec0  895020               mov dword ptr [eax + 0x20], edx
// 0059aec3  0fb65124             movzx edx, byte ptr [ecx + 0x24]
// 0059aec7  885024               mov byte ptr [eax + 0x24], dl
// 0059aeca  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0059aecd  895028               mov dword ptr [eax + 0x28], edx
// 0059aed0  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 0059aed3  89502c               mov dword ptr [eax + 0x2c], edx
// 0059aed6  8b5130               mov edx, dword ptr [ecx + 0x30]
// 0059aed9  895030               mov dword ptr [eax + 0x30], edx
// 0059aedc  8b5134               mov edx, dword ptr [ecx + 0x34]
// 0059aedf  895034               mov dword ptr [eax + 0x34], edx
// 0059aee2  8b5138               mov edx, dword ptr [ecx + 0x38]
// 0059aee5  895038               mov dword ptr [eax + 0x38], edx
// 0059aee8  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 0059aeeb  89503c               mov dword ptr [eax + 0x3c], edx
// 0059aeee  8b5140               mov edx, dword ptr [ecx + 0x40]
// 0059aef1  895040               mov dword ptr [eax + 0x40], edx
// 0059aef4  8b5144               mov edx, dword ptr [ecx + 0x44]
// 0059aef7  895044               mov dword ptr [eax + 0x44], edx
// 0059aefa  8b5148               mov edx, dword ptr [ecx + 0x48]
// 0059aefd  895048               mov dword ptr [eax + 0x48], edx
// 0059af00  8b514c               mov edx, dword ptr [ecx + 0x4c]
// 0059af03  89504c               mov dword ptr [eax + 0x4c], edx
// 0059af06  8b5150               mov edx, dword ptr [ecx + 0x50]
// 0059af09  895050               mov dword ptr [eax + 0x50], edx
// 0059af0c  8b5154               mov edx, dword ptr [ecx + 0x54]
// 0059af0f  895054               mov dword ptr [eax + 0x54], edx
// 0059af12  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0059af15  56                   push esi
// 0059af16  895058               mov dword ptr [eax + 0x58], edx
// 0059af19  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 0059af1c  8bf1                 mov esi, ecx
// 0059af1e  57                   push edi
// 0059af1f  89505c               mov dword ptr [eax + 0x5c], edx
// 0059af22  8d5060               lea edx, [eax + 0x60]
// 0059af25  2bf0                 sub esi, eax
// 0059af27  bf80000000           mov edi, 0x80
// 0059af2c  8d642400             lea esp, [esp]
// 0059af30  8a0c16               mov cl, byte ptr [esi + edx]
// 0059af33  880a                 mov byte ptr [edx], cl
// 0059af35  42                   inc edx
// 0059af36  83ef01               sub edi, 1
// 0059af39  75f5                 jne 0x59af30
// 0059af3b  5f                   pop edi
// 0059af3c  5e                   pop esi
// 0059af3d  c20400               ret 4
// library rbx2016-raknet/ReliabilityLayer.cpp (function ??4InternalPacket@RakNet@@QAEAAU01@ABU01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
