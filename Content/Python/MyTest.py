import unreal
import sys

# レベル内の選択しているアクターを取得
actors = unreal.EditorActorSubsystem().get_selected_level_actors()
print (actors)
for actor in actors:

        location = unreal.Vector(float(sys.argv[1]),float(sys.argv[2]),float(sys.argv[3]))

        # 例：位置変更
        actor.set_actor_location(location,False,True)