// roc 2007-03 0054acd0  unit: seg_00540000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054acd0
//
// 0054acd0  56                   push esi
// 0054acd1  8bf1                 mov esi, ecx
// 0054acd3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054acd7  83f9ff               cmp ecx, -1
// 0054acda  7505                 jne 0x54ace1
// 0054acdc  b900100000           mov ecx, 0x1000
// 0054ace1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054ace5  83f8ff               cmp eax, -1
// 0054ace8  7509                 jne 0x54acf3
// 0054acea  b804000000           mov eax, 4
// 0054acef  89442410             mov dword ptr [esp + 0x10], eax
// 0054acf3  83f802               cmp eax, 2
// 0054acf6  c744240c02000000     mov dword ptr [esp + 0xc], 2
// 0054acfe  8d442410             lea eax, [esp + 0x10]
// 0054ad02  7f04                 jg 0x54ad08
// 0054ad04  8d44240c             lea eax, [esp + 0xc]
// 0054ad08  85c9                 test ecx, ecx
// 0054ad0a  8b00                 mov eax, dword ptr [eax]
// 0054ad0c  894654               mov dword ptr [esi + 0x54], eax
// 0054ad0f  7505                 jne 0x54ad16
// 0054ad11  b901000000           mov ecx, 1
// 0054ad16  57                   push edi
// 0054ad17  8d3c08               lea edi, [eax + ecx]
// 0054ad1a  397e50               cmp dword ptr [esi + 0x50], edi
// 0054ad1d  7429                 je 0x54ad48
// 0054ad1f  6a00                 push 0
// 0054ad21  57                   push edi
// 0054ad22  8d4c241c             lea ecx, [esp + 0x1c]
// 0054ad26  ff1568e77700         call dword ptr [0x77e768]
// 0054ad2c  8b5650               mov edx, dword ptr [esi + 0x50]
// 0054ad2f  897e50               mov dword ptr [esi + 0x50], edi
// 0054ad32  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0054ad35  85c9                 test ecx, ecx
// 0054ad37  89464c               mov dword ptr [esi + 0x4c], eax
// 0054ad3a  740c                 je 0x54ad48
// 0054ad3c  52                   push edx
// 0054ad3d  51                   push ecx
// 0054ad3e  8d4c241c             lea ecx, [esp + 0x1c]
// 0054ad42  ff1560e77700         call dword ptr [0x77e760]
// 0054ad48  8b06                 mov eax, dword ptr [esi]
// 0054ad4a  8b5054               mov edx, dword ptr [eax + 0x54]
// 0054ad4d  8bce                 mov ecx, esi
// 0054ad4f  ffd2                 call edx
// 0054ad51  807e4400             cmp byte ptr [esi + 0x44], 0
// 0054ad55  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0054ad59  8b00                 mov eax, dword ptr [eax]
// 0054ad5b  5f                   pop edi
// 0054ad5c  7404                 je 0x54ad62
// 0054ad5e  c6464400             mov byte ptr [esi + 0x44], 0
// 0054ad62  894640               mov dword ptr [esi + 0x40], eax
// 0054ad65  c6464401             mov byte ptr [esi + 0x44], 1
// 0054ad69  834e5801             or dword ptr [esi + 0x58], 1
// 0054ad6d  c6463c00             mov byte ptr [esi + 0x3c], 0
// 0054ad71  5e                   pop esi
// 0054ad72  c20c00               ret 0xc
// copied from an identical function in another client (function ?open@?$indirect_streambuf@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uinput_seekable@iostreams@2@@detail@iostreams@boost@@QAEXABV?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@4@HH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp