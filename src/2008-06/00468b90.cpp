// from server: 29% by colin
struct CSettingsDialog
{
    volatile int first;
    volatile int second;
    volatile short third;
    volatile short fourth;
    volatile short fifth;
    volatile short sixth;
    volatile int seventh;
    CSettingsDialog(int a, int b, int c);
};

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);

struct Guard {
    void* section;
    bool locked;
    explicit Guard(void* p);
    ~Guard();
};

struct DxUserInput
{
    char pad[0x58];
    bool flag58;
    void method468050(int);
    CSettingsDialog* method467440(int*);
    void method4672a0(int, int, DxUserInput*);
    void method467a00(int*);
    void method4684a0(int, float*);
    void method468a60(float*);
    int method469f00(int, float*);
    void handleMessage(unsigned int msg, int wParam, int lParam);
};

void DxUserInput::handleMessage(unsigned int msg, int wParam, int lParam)
{
    if (msg > 0x202)
    {
        unsigned int idx = msg - 0x204;
        if (idx > 0x2d)
            return;
        switch (msg)
        {
        case 0x204:
        case 0x205:
        case 0x206:
        case 0x207:
        case 0x208:
        case 0x209:
        case 0x20a:
        case 0x20b:
        case 0x20c:
        case 0x20d:
        case 0x20e:
        case 0x20f:
        case 0x210:
        case 0x211:
        case 0x212:
        case 0x213:
        case 0x214:
        case 0x215:
        case 0x216:
        case 0x217:
        case 0x218:
        case 0x219:
        case 0x21a:
        case 0x21b:
        case 0x21c:
        case 0x21d:
        case 0x21e:
        case 0x21f:
        case 0x220:
        case 0x221:
        case 0x222:
        case 0x223:
        case 0x224:
        case 0x225:
        case 0x226:
        case 0x227:
        case 0x228:
        case 0x229:
        case 0x22a:
        case 0x22b:
        case 0x22c:
        case 0x22d:
        case 0x22e:
        case 0x22f:
        case 0x230:
        case 0x231:
            break;
        default:
            return;
        }
        return;
    }

    if (msg >= 0x200)
    {
        if (flag58)
        {
            if (msg == 0x201)
            {
                flag58 = false;
                return;
            }
        }
        int x = (short)(wParam & 0xffff);
        int y = (short)((wParam >> 16) & 0xffff);
        float fx = (float)x;
        float fy = (float)y;
        int r = method469f00(msg, &fx);
        method4684a0(r, &fx);
        method468a60(&fx);
        return;
    }

    unsigned int idx = msg - 7;
    if (idx > 0xfa)
        return;

    switch (msg)
    {
    case 0x100:
        method468050(1);
        return;
    case 0x101:
        flag58 = true;
        return;
    case 0x102:
        {
            int tmp;
            CSettingsDialog* d = method467440(&tmp);
            method4672a0(0xd, d->first, this);
            method467a00(&tmp);
        }
        return;
    case 0x103:
        {
            int tmp;
            CSettingsDialog* d = method467440(&tmp);
            method4672a0(0xc, d->first, this);
            method467a00(&tmp);
        }
        return;
    case 0x104:
    case 0x105:
    case 0x106:
    case 0x107:
    case 0x108:
    case 0x109:
    case 0x10a:
    case 0x10b:
    case 0x10c:
    case 0x10d:
    case 0x10e:
    case 0x10f:
    case 0x110:
    case 0x111:
    case 0x112:
    case 0x113:
    case 0x114:
    case 0x115:
    case 0x116:
    case 0x117:
    case 0x118:
    case 0x119:
    case 0x11a:
    case 0x11b:
    case 0x11c:
    case 0x11d:
    case 0x11e:
    case 0x11f:
    case 0x120:
    case 0x121:
    case 0x122:
    case 0x123:
    case 0x124:
    case 0x125:
    case 0x126:
    case 0x127:
    case 0x128:
    case 0x129:
    case 0x12a:
    case 0x12b:
    case 0x12c:
    case 0x12d:
    case 0x12e:
    case 0x12f:
    case 0x130:
    case 0x131:
    case 0x132:
    case 0x133:
    case 0x134:
    case 0x135:
    case 0x136:
    case 0x137:
    case 0x138:
    case 0x139:
    case 0x13a:
    case 0x13b:
    case 0x13c:
    case 0x13d:
    case 0x13e:
    case 0x13f:
    case 0x140:
    case 0x141:
    case 0x142:
    case 0x143:
    case 0x144:
    case 0x145:
    case 0x146:
    case 0x147:
    case 0x148:
    case 0x149:
    case 0x14a:
    case 0x14b:
    case 0x14c:
    case 0x14d:
    case 0x14e:
    case 0x14f:
    case 0x150:
    case 0x151:
    case 0x152:
    case 0x153:
    case 0x154:
    case 0x155:
    case 0x156:
    case 0x157:
    case 0x158:
    case 0x159:
    case 0x15a:
    case 0x15b:
    case 0x15c:
    case 0x15d:
    case 0x15e:
    case 0x15f:
    case 0x160:
    case 0x161:
    case 0x162:
    case 0x163:
    case 0x164:
    case 0x165:
    case 0x166:
    case 0x167:
    case 0x168:
    case 0x169:
    case 0x16a:
    case 0x16b:
    case 0x16c:
    case 0x16d:
    case 0x16e:
    case 0x16f:
    case 0x170:
    case 0x171:
    case 0x172:
    case 0x173:
    case 0x174:
    case 0x175:
    case 0x176:
    case 0x177:
    case 0x178:
    case 0x179:
    case 0x17a:
    case 0x17b:
    case 0x17c:
    case 0x17d:
    case 0x17e:
    case 0x17f:
    case 0x180:
    case 0x181:
    case 0x182:
    case 0x183:
    case 0x184:
    case 0x185:
    case 0x186:
    case 0x187:
    case 0x188:
    case 0x189:
    case 0x18a:
    case 0x18b:
    case 0x18c:
    case 0x18d:
    case 0x18e:
    case 0x18f:
    case 0x190:
    case 0x191:
    case 0x192:
    case 0x193:
    case 0x194:
    case 0x195:
    case 0x196:
    case 0x197:
    case 0x198:
    case 0x199:
    case 0x19a:
    case 0x19b:
    case 0x19c:
    case 0x19d:
    case 0x19e:
    case 0x19f:
    case 0x1a0:
    case 0x1a1:
    case 0x1a2:
    case 0x1a3:
    case 0x1a4:
    case 0x1a5:
    case 0x1a6:
    case 0x1a7:
    case 0x1a8:
    case 0x1a9:
    case 0x1aa:
    case 0x1ab:
    case 0x1ac:
    case 0x1ad:
    case 0x1ae:
    case 0x1af:
    case 0x1b0:
    case 0x1b1:
    case 0x1b2:
    case 0x1b3:
    case 0x1b4:
    case 0x1b5:
    case 0x1b6:
    case 0x1b7:
    case 0x1b8:
    case 0x1b9:
    case 0x1ba:
    case 0x1bb:
    case 0x1bc:
    case 0x1bd:
    case 0x1be:
    case 0x1bf:
    case 0x1c0:
    case 0x1c1:
    case 0x1c2:
    case 0x1c3:
    case 0x1c4:
    case 0x1c5:
    case 0x1c6:
    case 0x1c7:
    case 0x1c8:
    case 0x1c9:
    case 0x1ca:
    case 0x1cb:
    case 0x1cc:
    case 0x1cd:
    case 0x1ce:
    case 0x1cf:
    case 0x1d0:
    case 0x1d1:
    case 0x1d2:
    case 0x1d3:
    case 0x1d4:
    case 0x1d5:
    case 0x1d6:
    case 0x1d7:
    case 0x1d8:
    case 0x1d9:
    case 0x1da:
    case 0x1db:
    case 0x1dc:
    case 0x1dd:
    case 0x1de:
    case 0x1df:
    case 0x1e0:
    case 0x1e1:
    case 0x1e2:
    case 0x1e3:
    case 0x1e4:
    case 0x1e5:
    case 0x1e6:
    case 0x1e7:
    case 0x1e8:
    case 0x1e9:
    case 0x1ea:
    case 0x1eb:
    case 0x1ec:
    case 0x1ed:
    case 0x1ee:
    case 0x1ef:
    case 0x1f0:
    case 0x1f1:
    case 0x1f2:
    case 0x1f3:
    case 0x1f4:
    case 0x1f5:
    case 0x1f6:
    case 0x1f7:
    case 0x1f8:
    case 0x1f9:
    case 0x1fa:
    case 0x1fb:
    case 0x1fc:
    case 0x1fd:
    case 0x1fe:
    case 0x1ff:
        return;
    case 0x200:
    case 0x201:
        {
            int x = (short)(wParam & 0xffff);
            int y = (short)((wParam >> 16) & 0xffff);
            float fx = (float)x;
            float fy = (float)y;
            int r = method469f00(msg, &fx);
            method4684a0(r, &fx);
            method468a60(&fx);
        }
        return;
    case 0x20a:
        {
            int x = (short)(wParam & 0xffff);
            int y = (short)((wParam >> 16) & 0xffff);
            float fx = (float)x;
            float fy = (float)y;
            int code;
            if ((float)lParam < 0.0)
                code = 8;
            else
                code = 9;
            method4684a0(code, &fx);
        }
        return;
    default:
        return;
    }
}
