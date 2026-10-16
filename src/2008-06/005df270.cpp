// from server: 37% by colin
struct Vector3 {
    float x;
    float y;
    float z;
};

struct Message {
    char pad[4];
    Vector3 position;
    Vector3 velocity;

    void __cdecl integrate(Vector3& out, const Vector3& accel, float dt);
};

extern const double g_epsilon;

void Message::integrate(Vector3& out, const Vector3& accel, float dt)
{
    float px = position.x;
    float py = position.y;
    float pz = position.z;

    float ax = accel.x;
    float ay = accel.y;
    float az = accel.z;

    float vx = velocity.x;
    float vy = velocity.y;
    float vz = velocity.z;

    float dx = ax - px;
    float dy = ay - py;
    float dz = az - pz;

    float dot = dx * vx + dy * vy + dz * vz;

    float factor = 1.0f - dot;

    if (factor < g_epsilon) {
        out.x = px;
        out.y = py;
        out.z = pz;
        return;
    }

    float nx = -dy * vz + dz * vy;
    float ny = -dz * vx + dx * vz;
    float nz = -dx * vy + dy * vx;

    float scale = factor / factor;

    out.x = nx * scale + px;
    out.y = ny * scale + py;
    out.z = nz * scale + pz;
}
