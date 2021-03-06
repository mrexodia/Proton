#ifdef __cplusplus
extern "C" {
#endif
extern HServerListRequest cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList(void *, AppId_t, MatchMakingKeyValuePair_t **, uint32, ISteamMatchmakingServerListResponse *);
extern HServerListRequest cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList(void *, AppId_t, ISteamMatchmakingServerListResponse *);
extern HServerListRequest cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList(void *, AppId_t, MatchMakingKeyValuePair_t **, uint32, ISteamMatchmakingServerListResponse *);
extern HServerListRequest cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList(void *, AppId_t, MatchMakingKeyValuePair_t **, uint32, ISteamMatchmakingServerListResponse *);
extern HServerListRequest cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList(void *, AppId_t, MatchMakingKeyValuePair_t **, uint32, ISteamMatchmakingServerListResponse *);
extern HServerListRequest cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList(void *, AppId_t, MatchMakingKeyValuePair_t **, uint32, ISteamMatchmakingServerListResponse *);
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest(void *, HServerListRequest);
extern gameserveritem_t * cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails(void *, HServerListRequest, int);
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery(void *, HServerListRequest);
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery(void *, HServerListRequest);
extern bool cppISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing(void *, HServerListRequest);
extern int cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount(void *, HServerListRequest);
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer(void *, HServerListRequest, int);
extern HServerQuery cppISteamMatchmakingServers_SteamMatchMakingServers002_PingServer(void *, uint32, uint16, ISteamMatchmakingPingResponse *);
extern HServerQuery cppISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails(void *, uint32, uint16, ISteamMatchmakingPlayersResponse *);
extern HServerQuery cppISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules(void *, uint32, uint16, ISteamMatchmakingRulesResponse *);
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery(void *, HServerQuery);
#ifdef __cplusplus
}
#endif
