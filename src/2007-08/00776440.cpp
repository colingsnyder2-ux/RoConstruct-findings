// from server: 100% by tester
// roc 2008-06 007f9330  unit: seg_007f0000  size: 1252 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9330
//
// 007f9330  b908e79700           mov ecx, 0x97e708
// 007f9335  ff15043f8000         call dword ptr [0x803f04]
// 007f933b  b914e79700           mov ecx, 0x97e714
// 007f9340  c70500e7970000000000 mov dword ptr [0x97e700], 0
// 007f934a  c70504e79700ac260000 mov dword ptr [0x97e704], 0x26ac
// 007f9354  ff15043f8000         call dword ptr [0x803f04]
// 007f935a  b920e79700           mov ecx, 0x97e720
// 007f935f  c7050ce7970099330000 mov dword ptr [0x97e70c], 0x3399
// 007f9369  c70510e79700ad260000 mov dword ptr [0x97e710], 0x26ad
// 007f9373  ff15043f8000         call dword ptr [0x803f04]
// 007f9379  b92ce79700           mov ecx, 0x97e72c
// 007f937e  c70518e7970033330000 mov dword ptr [0x97e718], 0x3333
// 007f9388  c7051ce79700ae260000 mov dword ptr [0x97e71c], 0x26ae
// 007f9392  ff15043f8000         call dword ptr [0x803f04]
// 007f9398  b938e79700           mov ecx, 0x97e738
// 007f939d  c70524e7970000330000 mov dword ptr [0x97e724], 0x3300
// 007f93a7  c70528e79700af260000 mov dword ptr [0x97e728], 0x26af
// 007f93b1  ff15043f8000         call dword ptr [0x803f04]
// 007f93b7  b944e79700           mov ecx, 0x97e744
// 007f93bc  c70530e7970000336600 mov dword ptr [0x97e730], 0x663300
// 007f93c6  c70534e79700b0260000 mov dword ptr [0x97e734], 0x26b0
// 007f93d0  ff15043f8000         call dword ptr [0x803f04]
// 007f93d6  b950e79700           mov ecx, 0x97e750
// 007f93db  c7053ce7970000008000 mov dword ptr [0x97e73c], 0x800000
// 007f93e5  c70540e79700b1260000 mov dword ptr [0x97e740], 0x26b1
// 007f93ef  ff15043f8000         call dword ptr [0x803f04]
// 007f93f5  b95ce79700           mov ecx, 0x97e75c
// 007f93fa  c70548e7970033339900 mov dword ptr [0x97e748], 0x993333
// 007f9404  c7054ce79700b2260000 mov dword ptr [0x97e74c], 0x26b2
// 007f940e  ff15043f8000         call dword ptr [0x803f04]
// 007f9414  b968e79700           mov ecx, 0x97e768
// 007f9419  c70554e7970033333300 mov dword ptr [0x97e754], 0x333333
// 007f9423  c70558e79700b3260000 mov dword ptr [0x97e758], 0x26b3
// 007f942d  ff15043f8000         call dword ptr [0x803f04]
// 007f9433  b974e79700           mov ecx, 0x97e774
// 007f9438  c70560e7970080000000 mov dword ptr [0x97e760], 0x80
// 007f9442  c70564e79700b4260000 mov dword ptr [0x97e764], 0x26b4
// 007f944c  ff15043f8000         call dword ptr [0x803f04]
// 007f9452  b980e79700           mov ecx, 0x97e780
// 007f9457  c7056ce79700ff660000 mov dword ptr [0x97e76c], 0x66ff
// 007f9461  c70570e79700b5260000 mov dword ptr [0x97e770], 0x26b5
// 007f946b  ff15043f8000         call dword ptr [0x803f04]
// 007f9471  b98ce79700           mov ecx, 0x97e78c
// 007f9476  c70578e7970080800000 mov dword ptr [0x97e778], 0x8080
// 007f9480  c7057ce79700b6260000 mov dword ptr [0x97e77c], 0x26b6
// 007f948a  ff15043f8000         call dword ptr [0x803f04]
// 007f9490  b998e79700           mov ecx, 0x97e798
// 007f9495  c70584e7970000800000 mov dword ptr [0x97e784], 0x8000
// 007f949f  c70588e79700b7260000 mov dword ptr [0x97e788], 0x26b7
// 007f94a9  ff15043f8000         call dword ptr [0x803f04]
// 007f94af  b9a4e79700           mov ecx, 0x97e7a4
// 007f94b4  c70590e7970000808000 mov dword ptr [0x97e790], 0x808000
// 007f94be  c70594e79700b8260000 mov dword ptr [0x97e794], 0x26b8
// 007f94c8  ff15043f8000         call dword ptr [0x803f04]
// 007f94ce  b9b0e79700           mov ecx, 0x97e7b0
// 007f94d3  c7059ce797000000ff00 mov dword ptr [0x97e79c], 0xff0000
// 007f94dd  c705a0e79700b9260000 mov dword ptr [0x97e7a0], 0x26b9
// 007f94e7  ff15043f8000         call dword ptr [0x803f04]
// 007f94ed  b9bce79700           mov ecx, 0x97e7bc
// 007f94f2  c705a8e7970066669900 mov dword ptr [0x97e7a8], 0x996666
// 007f94fc  c705ace79700ba260000 mov dword ptr [0x97e7ac], 0x26ba
// 007f9506  ff15043f8000         call dword ptr [0x803f04]
// 007f950c  b9c8e79700           mov ecx, 0x97e7c8
// 007f9511  c705b4e7970080808000 mov dword ptr [0x97e7b4], 0x808080
// 007f951b  c705b8e79700bb260000 mov dword ptr [0x97e7b8], 0x26bb
// 007f9525  ff15043f8000         call dword ptr [0x803f04]
// 007f952b  b9d4e79700           mov ecx, 0x97e7d4
// 007f9530  c705c0e79700ff000000 mov dword ptr [0x97e7c0], 0xff
// 007f953a  c705c4e79700bc260000 mov dword ptr [0x97e7c4], 0x26bc
// 007f9544  ff15043f8000         call dword ptr [0x803f04]
// 007f954a  b9e0e79700           mov ecx, 0x97e7e0
// 007f954f  c705cce79700ff990000 mov dword ptr [0x97e7cc], 0x99ff
// 007f9559  c705d0e79700bd260000 mov dword ptr [0x97e7d0], 0x26bd
// 007f9563  ff15043f8000         call dword ptr [0x803f04]
// 007f9569  b9ece79700           mov ecx, 0x97e7ec
// 007f956e  c705d8e7970099cc0000 mov dword ptr [0x97e7d8], 0xcc99
// 007f9578  c705dce79700be260000 mov dword ptr [0x97e7dc], 0x26be
// 007f9582  ff15043f8000         call dword ptr [0x803f04]
// 007f9588  c705e4e7970033996600 mov dword ptr [0x97e7e4], 0x669933
// 007f9592  c705e8e79700bf260000 mov dword ptr [0x97e7e8], 0x26bf
// 007f959c  b9f8e79700           mov ecx, 0x97e7f8
// 007f95a1  ff15043f8000         call dword ptr [0x803f04]
// 007f95a7  b904e89700           mov ecx, 0x97e804
// 007f95ac  c705f0e7970033cccc00 mov dword ptr [0x97e7f0], 0xcccc33
// 007f95b6  c705f4e79700c0260000 mov dword ptr [0x97e7f4], 0x26c0
// 007f95c0  ff15043f8000         call dword ptr [0x803f04]
// 007f95c6  b910e89700           mov ecx, 0x97e810
// 007f95cb  c705fce797003366ff00 mov dword ptr [0x97e7fc], 0xff6633
// 007f95d5  c70500e89700c1260000 mov dword ptr [0x97e800], 0x26c1
// 007f95df  ff15043f8000         call dword ptr [0x803f04]
// 007f95e5  b91ce89700           mov ecx, 0x97e81c
// 007f95ea  c70508e8970080008000 mov dword ptr [0x97e808], 0x800080
// 007f95f4  c7050ce89700c2260000 mov dword ptr [0x97e80c], 0x26c2
// 007f95fe  ff15043f8000         call dword ptr [0x803f04]
// 007f9604  b928e89700           mov ecx, 0x97e828
// 007f9609  c70514e8970099999900 mov dword ptr [0x97e814], 0x999999
// 007f9613  c70518e89700c3260000 mov dword ptr [0x97e818], 0x26c3
// 007f961d  ff15043f8000         call dword ptr [0x803f04]
// 007f9623  b934e89700           mov ecx, 0x97e834
// 007f9628  c70520e89700ff00ff00 mov dword ptr [0x97e820], 0xff00ff
// 007f9632  c70524e89700c4260000 mov dword ptr [0x97e824], 0x26c4
// 007f963c  ff15043f8000         call dword ptr [0x803f04]
// 007f9642  b940e89700           mov ecx, 0x97e840
// 007f9647  c7052ce89700ffcc0000 mov dword ptr [0x97e82c], 0xccff
// 007f9651  c70530e89700c5260000 mov dword ptr [0x97e830], 0x26c5
// 007f965b  ff15043f8000         call dword ptr [0x803f04]
// 007f9661  b94ce89700           mov ecx, 0x97e84c
// 007f9666  c70538e89700ffff0000 mov dword ptr [0x97e838], 0xffff
// 007f9670  c7053ce89700c6260000 mov dword ptr [0x97e83c], 0x26c6
// 007f967a  ff15043f8000         call dword ptr [0x803f04]
// 007f9680  b958e89700           mov ecx, 0x97e858
// 007f9685  c70544e8970000ff0000 mov dword ptr [0x97e844], 0xff00
// 007f968f  c70548e89700c7260000 mov dword ptr [0x97e848], 0x26c7
// 007f9699  ff15043f8000         call dword ptr [0x803f04]
// 007f969f  b964e89700           mov ecx, 0x97e864
// 007f96a4  c70550e8970000ffff00 mov dword ptr [0x97e850], 0xffff00
// 007f96ae  c70554e89700c8260000 mov dword ptr [0x97e854], 0x26c8
// 007f96b8  ff15043f8000         call dword ptr [0x803f04]
// 007f96be  b970e89700           mov ecx, 0x97e870
// 007f96c3  c7055ce8970000ccff00 mov dword ptr [0x97e85c], 0xffcc00
// 007f96cd  c70560e89700c9260000 mov dword ptr [0x97e860], 0x26c9
// 007f96d7  ff15043f8000         call dword ptr [0x803f04]
// 007f96dd  b97ce89700           mov ecx, 0x97e87c
// 007f96e2  c70568e8970099336600 mov dword ptr [0x97e868], 0x663399
// 007f96ec  c7056ce89700ca260000 mov dword ptr [0x97e86c], 0x26ca
// 007f96f6  ff15043f8000         call dword ptr [0x803f04]
// 007f96fc  b988e89700           mov ecx, 0x97e888
// 007f9701  c70574e89700c0c0c000 mov dword ptr [0x97e874], 0xc0c0c0
// 007f970b  c70578e89700cb260000 mov dword ptr [0x97e878], 0x26cb
// 007f9715  ff15043f8000         call dword ptr [0x803f04]
// 007f971b  b994e89700           mov ecx, 0x97e894
// 007f9720  c70580e89700ff99cc00 mov dword ptr [0x97e880], 0xcc99ff
// 007f972a  c70584e89700cc260000 mov dword ptr [0x97e884], 0x26cc
// 007f9734  ff15043f8000         call dword ptr [0x803f04]
// 007f973a  b9a0e89700           mov ecx, 0x97e8a0
// 007f973f  c7058ce89700ffcc9900 mov dword ptr [0x97e88c], 0x99ccff
// 007f9749  c70590e89700cd260000 mov dword ptr [0x97e890], 0x26cd
// 007f9753  ff15043f8000         call dword ptr [0x803f04]
// 007f9759  b9ace89700           mov ecx, 0x97e8ac
// 007f975e  c70598e89700ffff9900 mov dword ptr [0x97e898], 0x99ffff
// 007f9768  c7059ce89700ce260000 mov dword ptr [0x97e89c], 0x26ce
// 007f9772  ff15043f8000         call dword ptr [0x803f04]
// 007f9778  b9b8e89700           mov ecx, 0x97e8b8
// 007f977d  c705a4e89700ccffcc00 mov dword ptr [0x97e8a4], 0xccffcc
// 007f9787  c705a8e89700cf260000 mov dword ptr [0x97e8a8], 0x26cf
// 007f9791  ff15043f8000         call dword ptr [0x803f04]
// 007f9797  b9c4e89700           mov ecx, 0x97e8c4
// 007f979c  c705b0e89700ccffff00 mov dword ptr [0x97e8b0], 0xffffcc
// 007f97a6  c705b4e89700d0260000 mov dword ptr [0x97e8b4], 0x26d0
// 007f97b0  ff15043f8000         call dword ptr [0x803f04]
// 007f97b6  b9d0e89700           mov ecx, 0x97e8d0
// 007f97bb  c705bce8970099ccff00 mov dword ptr [0x97e8bc], 0xffcc99
// 007f97c5  c705c0e89700d1260000 mov dword ptr [0x97e8c0], 0x26d1
// 007f97cf  ff15043f8000         call dword ptr [0x803f04]
// 007f97d5  b9dce89700           mov ecx, 0x97e8dc
// 007f97da  c705c8e89700cc99ff00 mov dword ptr [0x97e8c8], 0xff99cc
// 007f97e4  c705cce89700d2260000 mov dword ptr [0x97e8cc], 0x26d2
// 007f97ee  ff15043f8000         call dword ptr [0x803f04]
// 007f97f4  6810188000           push 0x801810
// 007f97f9  c705d4e89700ffffff00 mov dword ptr [0x97e8d4], 0xffffff
// 007f9803  c705d8e89700d3260000 mov dword ptr [0x97e8d8], 0x26d3
// 007f980d  e89d7feaff           call 0x6a17af
// 007f9812  59                   pop ecx
// 007f9813  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlPopupColor.cpp (function ??__EextendedColors@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopupColor.cpp
