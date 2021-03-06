/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementDoctorManager : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver> {
    HDAchievementDoctor * _achievementDoctor;
    NSObject<OS_dispatch_queue> * _fixupWaitQueue;
    HDProfile * _profile;
    NSNumber * _waitingToRun;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_definitionIdentifiersModifiedPerFixupVersion;

- (void).cxx_destruct;
- (long long)_activityInterval;
- (void)_generateCrashReportForMissingAchievements:(id)arg1;
- (id)_lastSuccessfulFixupDate;
- (long long)_lastSuccessfulFixupVersion;
- (bool)_multipleWatchesArePaired;
- (void)_performAchievementsFixupActivity:(id)arg1;
- (void)_performAchievementsFixupIfWaiting;
- (bool)_queue_isWaitingToRun;
- (void)_queue_performAchievementsFixupWithCompletion:(id /* block */)arg1;
- (void)_queue_setWaitingToRun:(bool)arg1;
- (void)_registerActivity;
- (void)_setLastSuccessfulFixupDate:(id)arg1;
- (void)_setLastSuccessfulFixupVersion:(long long)arg1;
- (void)_setNeedsFixupWithCompletion:(id /* block */)arg1;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1;

@end
