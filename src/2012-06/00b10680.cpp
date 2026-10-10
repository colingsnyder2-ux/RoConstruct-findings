// roc 2012-06 00b10680  unit: seg_00b10000  size: 1252 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b10680
//
// 00b10680  b9e099e500           mov ecx, 0xe599e0
// 00b10685  ff158447b200         call dword ptr [0xb24784]
// 00b1068b  b9ec99e500           mov ecx, 0xe599ec
// 00b10690  c705d899e50000000000 mov dword ptr [0xe599d8], 0
// 00b1069a  c705dc99e500ac260000 mov dword ptr [0xe599dc], 0x26ac
// 00b106a4  ff158447b200         call dword ptr [0xb24784]
// 00b106aa  b9f899e500           mov ecx, 0xe599f8
// 00b106af  c705e499e50099330000 mov dword ptr [0xe599e4], 0x3399
// 00b106b9  c705e899e500ad260000 mov dword ptr [0xe599e8], 0x26ad
// 00b106c3  ff158447b200         call dword ptr [0xb24784]
// 00b106c9  b9049ae500           mov ecx, 0xe59a04
// 00b106ce  c705f099e50033330000 mov dword ptr [0xe599f0], 0x3333
// 00b106d8  c705f499e500ae260000 mov dword ptr [0xe599f4], 0x26ae
// 00b106e2  ff158447b200         call dword ptr [0xb24784]
// 00b106e8  b9109ae500           mov ecx, 0xe59a10
// 00b106ed  c705fc99e50000330000 mov dword ptr [0xe599fc], 0x3300
// 00b106f7  c705009ae500af260000 mov dword ptr [0xe59a00], 0x26af
// 00b10701  ff158447b200         call dword ptr [0xb24784]
// 00b10707  b91c9ae500           mov ecx, 0xe59a1c
// 00b1070c  c705089ae50000336600 mov dword ptr [0xe59a08], 0x663300
// 00b10716  c7050c9ae500b0260000 mov dword ptr [0xe59a0c], 0x26b0
// 00b10720  ff158447b200         call dword ptr [0xb24784]
// 00b10726  b9289ae500           mov ecx, 0xe59a28
// 00b1072b  c705149ae50000008000 mov dword ptr [0xe59a14], 0x800000
// 00b10735  c705189ae500b1260000 mov dword ptr [0xe59a18], 0x26b1
// 00b1073f  ff158447b200         call dword ptr [0xb24784]
// 00b10745  b9349ae500           mov ecx, 0xe59a34
// 00b1074a  c705209ae50033339900 mov dword ptr [0xe59a20], 0x993333
// 00b10754  c705249ae500b2260000 mov dword ptr [0xe59a24], 0x26b2
// 00b1075e  ff158447b200         call dword ptr [0xb24784]
// 00b10764  b9409ae500           mov ecx, 0xe59a40
// 00b10769  c7052c9ae50033333300 mov dword ptr [0xe59a2c], 0x333333
// 00b10773  c705309ae500b3260000 mov dword ptr [0xe59a30], 0x26b3
// 00b1077d  ff158447b200         call dword ptr [0xb24784]
// 00b10783  b94c9ae500           mov ecx, 0xe59a4c
// 00b10788  c705389ae50080000000 mov dword ptr [0xe59a38], 0x80
// 00b10792  c7053c9ae500b4260000 mov dword ptr [0xe59a3c], 0x26b4
// 00b1079c  ff158447b200         call dword ptr [0xb24784]
// 00b107a2  b9589ae500           mov ecx, 0xe59a58
// 00b107a7  c705449ae500ff660000 mov dword ptr [0xe59a44], 0x66ff
// 00b107b1  c705489ae500b5260000 mov dword ptr [0xe59a48], 0x26b5
// 00b107bb  ff158447b200         call dword ptr [0xb24784]
// 00b107c1  b9649ae500           mov ecx, 0xe59a64
// 00b107c6  c705509ae50080800000 mov dword ptr [0xe59a50], 0x8080
// 00b107d0  c705549ae500b6260000 mov dword ptr [0xe59a54], 0x26b6
// 00b107da  ff158447b200         call dword ptr [0xb24784]
// 00b107e0  b9709ae500           mov ecx, 0xe59a70
// 00b107e5  c7055c9ae50000800000 mov dword ptr [0xe59a5c], 0x8000
// 00b107ef  c705609ae500b7260000 mov dword ptr [0xe59a60], 0x26b7
// 00b107f9  ff158447b200         call dword ptr [0xb24784]
// 00b107ff  b97c9ae500           mov ecx, 0xe59a7c
// 00b10804  c705689ae50000808000 mov dword ptr [0xe59a68], 0x808000
// 00b1080e  c7056c9ae500b8260000 mov dword ptr [0xe59a6c], 0x26b8
// 00b10818  ff158447b200         call dword ptr [0xb24784]
// 00b1081e  b9889ae500           mov ecx, 0xe59a88
// 00b10823  c705749ae5000000ff00 mov dword ptr [0xe59a74], 0xff0000
// 00b1082d  c705789ae500b9260000 mov dword ptr [0xe59a78], 0x26b9
// 00b10837  ff158447b200         call dword ptr [0xb24784]
// 00b1083d  b9949ae500           mov ecx, 0xe59a94
// 00b10842  c705809ae50066669900 mov dword ptr [0xe59a80], 0x996666
// 00b1084c  c705849ae500ba260000 mov dword ptr [0xe59a84], 0x26ba
// 00b10856  ff158447b200         call dword ptr [0xb24784]
// 00b1085c  b9a09ae500           mov ecx, 0xe59aa0
// 00b10861  c7058c9ae50080808000 mov dword ptr [0xe59a8c], 0x808080
// 00b1086b  c705909ae500bb260000 mov dword ptr [0xe59a90], 0x26bb
// 00b10875  ff158447b200         call dword ptr [0xb24784]
// 00b1087b  b9ac9ae500           mov ecx, 0xe59aac
// 00b10880  c705989ae500ff000000 mov dword ptr [0xe59a98], 0xff
// 00b1088a  c7059c9ae500bc260000 mov dword ptr [0xe59a9c], 0x26bc
// 00b10894  ff158447b200         call dword ptr [0xb24784]
// 00b1089a  b9b89ae500           mov ecx, 0xe59ab8
// 00b1089f  c705a49ae500ff990000 mov dword ptr [0xe59aa4], 0x99ff
// 00b108a9  c705a89ae500bd260000 mov dword ptr [0xe59aa8], 0x26bd
// 00b108b3  ff158447b200         call dword ptr [0xb24784]
// 00b108b9  b9c49ae500           mov ecx, 0xe59ac4
// 00b108be  c705b09ae50099cc0000 mov dword ptr [0xe59ab0], 0xcc99
// 00b108c8  c705b49ae500be260000 mov dword ptr [0xe59ab4], 0x26be
// 00b108d2  ff158447b200         call dword ptr [0xb24784]
// 00b108d8  c705bc9ae50033996600 mov dword ptr [0xe59abc], 0x669933
// 00b108e2  c705c09ae500bf260000 mov dword ptr [0xe59ac0], 0x26bf
// 00b108ec  b9d09ae500           mov ecx, 0xe59ad0
// 00b108f1  ff158447b200         call dword ptr [0xb24784]
// 00b108f7  b9dc9ae500           mov ecx, 0xe59adc
// 00b108fc  c705c89ae50033cccc00 mov dword ptr [0xe59ac8], 0xcccc33
// 00b10906  c705cc9ae500c0260000 mov dword ptr [0xe59acc], 0x26c0
// 00b10910  ff158447b200         call dword ptr [0xb24784]
// 00b10916  b9e89ae500           mov ecx, 0xe59ae8
// 00b1091b  c705d49ae5003366ff00 mov dword ptr [0xe59ad4], 0xff6633
// 00b10925  c705d89ae500c1260000 mov dword ptr [0xe59ad8], 0x26c1
// 00b1092f  ff158447b200         call dword ptr [0xb24784]
// 00b10935  b9f49ae500           mov ecx, 0xe59af4
// 00b1093a  c705e09ae50080008000 mov dword ptr [0xe59ae0], 0x800080
// 00b10944  c705e49ae500c2260000 mov dword ptr [0xe59ae4], 0x26c2
// 00b1094e  ff158447b200         call dword ptr [0xb24784]
// 00b10954  b9009be500           mov ecx, 0xe59b00
// 00b10959  c705ec9ae50099999900 mov dword ptr [0xe59aec], 0x999999
// 00b10963  c705f09ae500c3260000 mov dword ptr [0xe59af0], 0x26c3
// 00b1096d  ff158447b200         call dword ptr [0xb24784]
// 00b10973  b90c9be500           mov ecx, 0xe59b0c
// 00b10978  c705f89ae500ff00ff00 mov dword ptr [0xe59af8], 0xff00ff
// 00b10982  c705fc9ae500c4260000 mov dword ptr [0xe59afc], 0x26c4
// 00b1098c  ff158447b200         call dword ptr [0xb24784]
// 00b10992  b9189be500           mov ecx, 0xe59b18
// 00b10997  c705049be500ffcc0000 mov dword ptr [0xe59b04], 0xccff
// 00b109a1  c705089be500c5260000 mov dword ptr [0xe59b08], 0x26c5
// 00b109ab  ff158447b200         call dword ptr [0xb24784]
// 00b109b1  b9249be500           mov ecx, 0xe59b24
// 00b109b6  c705109be500ffff0000 mov dword ptr [0xe59b10], 0xffff
// 00b109c0  c705149be500c6260000 mov dword ptr [0xe59b14], 0x26c6
// 00b109ca  ff158447b200         call dword ptr [0xb24784]
// 00b109d0  b9309be500           mov ecx, 0xe59b30
// 00b109d5  c7051c9be50000ff0000 mov dword ptr [0xe59b1c], 0xff00
// 00b109df  c705209be500c7260000 mov dword ptr [0xe59b20], 0x26c7
// 00b109e9  ff158447b200         call dword ptr [0xb24784]
// 00b109ef  b93c9be500           mov ecx, 0xe59b3c
// 00b109f4  c705289be50000ffff00 mov dword ptr [0xe59b28], 0xffff00
// 00b109fe  c7052c9be500c8260000 mov dword ptr [0xe59b2c], 0x26c8
// 00b10a08  ff158447b200         call dword ptr [0xb24784]
// 00b10a0e  b9489be500           mov ecx, 0xe59b48
// 00b10a13  c705349be50000ccff00 mov dword ptr [0xe59b34], 0xffcc00
// 00b10a1d  c705389be500c9260000 mov dword ptr [0xe59b38], 0x26c9
// 00b10a27  ff158447b200         call dword ptr [0xb24784]
// 00b10a2d  b9549be500           mov ecx, 0xe59b54
// 00b10a32  c705409be50099336600 mov dword ptr [0xe59b40], 0x663399
// 00b10a3c  c705449be500ca260000 mov dword ptr [0xe59b44], 0x26ca
// 00b10a46  ff158447b200         call dword ptr [0xb24784]
// 00b10a4c  b9609be500           mov ecx, 0xe59b60
// 00b10a51  c7054c9be500c0c0c000 mov dword ptr [0xe59b4c], 0xc0c0c0
// 00b10a5b  c705509be500cb260000 mov dword ptr [0xe59b50], 0x26cb
// 00b10a65  ff158447b200         call dword ptr [0xb24784]
// 00b10a6b  b96c9be500           mov ecx, 0xe59b6c
// 00b10a70  c705589be500ff99cc00 mov dword ptr [0xe59b58], 0xcc99ff
// 00b10a7a  c7055c9be500cc260000 mov dword ptr [0xe59b5c], 0x26cc
// 00b10a84  ff158447b200         call dword ptr [0xb24784]
// 00b10a8a  b9789be500           mov ecx, 0xe59b78
// 00b10a8f  c705649be500ffcc9900 mov dword ptr [0xe59b64], 0x99ccff
// 00b10a99  c705689be500cd260000 mov dword ptr [0xe59b68], 0x26cd
// 00b10aa3  ff158447b200         call dword ptr [0xb24784]
// 00b10aa9  b9849be500           mov ecx, 0xe59b84
// 00b10aae  c705709be500ffff9900 mov dword ptr [0xe59b70], 0x99ffff
// 00b10ab8  c705749be500ce260000 mov dword ptr [0xe59b74], 0x26ce
// 00b10ac2  ff158447b200         call dword ptr [0xb24784]
// 00b10ac8  b9909be500           mov ecx, 0xe59b90
// 00b10acd  c7057c9be500ccffcc00 mov dword ptr [0xe59b7c], 0xccffcc
// 00b10ad7  c705809be500cf260000 mov dword ptr [0xe59b80], 0x26cf
// 00b10ae1  ff158447b200         call dword ptr [0xb24784]
// 00b10ae7  b99c9be500           mov ecx, 0xe59b9c
// 00b10aec  c705889be500ccffff00 mov dword ptr [0xe59b88], 0xffffcc
// 00b10af6  c7058c9be500d0260000 mov dword ptr [0xe59b8c], 0x26d0
// 00b10b00  ff158447b200         call dword ptr [0xb24784]
// 00b10b06  b9a89be500           mov ecx, 0xe59ba8
// 00b10b0b  c705949be50099ccff00 mov dword ptr [0xe59b94], 0xffcc99
// 00b10b15  c705989be500d1260000 mov dword ptr [0xe59b98], 0x26d1
// 00b10b1f  ff158447b200         call dword ptr [0xb24784]
// 00b10b25  b9b49be500           mov ecx, 0xe59bb4
// 00b10b2a  c705a09be500cc99ff00 mov dword ptr [0xe59ba0], 0xff99cc
// 00b10b34  c705a49be500d2260000 mov dword ptr [0xe59ba4], 0x26d2
// 00b10b3e  ff158447b200         call dword ptr [0xb24784]
// 00b10b44  682017b200           push 0xb21720
// 00b10b49  c705ac9be500ffffff00 mov dword ptr [0xe59bac], 0xffffff
// 00b10b53  c705b09be500d3260000 mov dword ptr [0xe59bb0], 0x26d3
// 00b10b5d  e89326e7ff           call 0x9831f5
// 00b10b62  59                   pop ecx
// 00b10b63  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPControlPopupColor.cpp (function ??__EextendedColors@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPControlPopupColor.cpp
