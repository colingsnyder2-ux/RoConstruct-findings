// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <FullyConnectedMesh2.h>
using namespace RakNet;
PluginReceiveResult FullyConnectedMesh2::OnVerifiedJoinStart(Packet *packet)
{
	RakNet::BitStream bsIn(packet->data,packet->length,false);
	bsIn.IgnoreBytes(sizeof(MessageID));

	unsigned short listSize;
	bsIn.Read(listSize);

	unsigned int curIndex = GetJoinsInProgressIndex(packet->guid);
	if (curIndex!=(unsigned int) -1)
	{
		VerifiedJoinInProgress *vjip = joinsInProgress[curIndex];

		for (unsigned int i=0; i < vjip->vjipMembers.Size(); i++)
		{
			vjip->vjipMembers[i].workingFlag=false;
		}

		for (unsigned short i=0; i < listSize; i++)
		{
			VerifiedJoinInProgressMember vjipm;
			ReadVerifiedJoinInProgressMember(&bsIn, &vjipm);

			unsigned int j;
			if (vjipm.guid!=UNASSIGNED_RAKNET_GUID)
				j = GetVerifiedJoinInProgressMemberIndex(vjipm.guid, vjip);
			else
				j = GetVerifiedJoinInProgressMemberIndex(vjipm.systemAddress, vjip);

			if (j==(unsigned int)-1)
			{
				vjipm.workingFlag=true;
				vjip->vjipMembers.Push(vjipm, _FILE_AND_LINE_);
			}
			else
			{
				vjip->vjipMembers[j].workingFlag=true;
			}
		}

		for (unsigned int i=0; i < vjip->vjipMembers.Size(); i++)
		{
			if (vjip->vjipMembers[i].workingFlag==false)
				vjip->vjipMembers[i].joinInProgressState=JIPS_UNNECESSARY;
		}

		if (ProcessVerifiedJoinInProgressIfCompleted(vjip))
		{
			return RR_STOP_PROCESSING_AND_DEALLOCATE;
		}

		return RR_CONTINUE_PROCESSING;
	}

	VerifiedJoinInProgress *vjip = RakNet::OP_NEW<VerifiedJoinInProgress>(_FILE_AND_LINE_);
	vjip->requester=packet->guid;
	if (listSize==0)
	{
		RakNet::BitStream bsOut;
		bsOut.Write((MessageID)ID_FCM2_VERIFIED_JOIN_CAPABLE);
		bsOut.WriteCasted<unsigned short>(0);
		WriteVJCUserData(&bsOut);
		SendUnified(&bsOut, HIGH_PRIORITY, RELIABLE_ORDERED, 0, packet->guid, false);
		joinsInProgress.Push(vjip, _FILE_AND_LINE_);
		return RR_STOP_PROCESSING_AND_DEALLOCATE;
	}

	for (unsigned short i=0; i < listSize; i++)
	{
		VerifiedJoinInProgressMember vjipm;
		ReadVerifiedJoinInProgressMember(&bsIn, &vjipm);
		vjip->vjipMembers.Push(vjipm, _FILE_AND_LINE_);
	}

	joinsInProgress.Push(vjip, _FILE_AND_LINE_);

	if (ProcessVerifiedJoinInProgressIfCompleted(vjip))
	{
		return RR_STOP_PROCESSING_AND_DEALLOCATE;
	}

	return RR_CONTINUE_PROCESSING;
}
